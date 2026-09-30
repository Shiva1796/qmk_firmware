# NyxKeys Hermes SP

![NyxKeys Hermes](https://imagedelivery.net/5Lj-4KVs36OWCtiVSZ4L1Q/bd9b4a5e-22b9-4ca1-54c0-a578e045a000/public)

The Hermes SP is the southpaw version of the Hermes: a 24-key numpad featuring a dedicated function row (F1–F4), a mirrored numpad layout with optional 2U Plus, Enter and Zero keys on the left, and a utility column on the left side. Designed and produced by NyxKeys.

- Keyboard Maintainer: [Shiva1796](https://github.com/Shiva1796)
- Hardware Supported: STM32F072-based PCB
- Hardware Availability: [nyxkeys.com](https://nyxkeys.com)

Make example for this keyboard (after setting up your build environment):

    make nyxkeys/hermes:default_sp

Flashing example for this keyboard:

    make nyxkeys/hermes:default_sp:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Layouts

Two layout macros are provided in `keyboard.json`:

| Layout        | Description                                                        |
|---------------|--------------------------------------------------------------------|
| `LAYOUT`      | All 24 keys as 1U: split Plus, split Enter, split Zero             |
| `LAYOUT_tall` | 2U tall Plus, 2U tall Enter and 2U wide Zero (21 keys)             |

The default keymap uses `LAYOUT`.

## Default keymap

| Layer | Access              | Contents                                                        |
|-------|---------------------|-----------------------------------------------------------------|
| 0     | Base                | F4–F1, mirrored numpad, Backspace, Enter, Tab. `Fn` is top-right of numpad |
| 1     | Hold `Fn`           | F5–F8, F10–F12, arrows on 8/6/4/2, PgUp/PgDn/Home/End on 9/3/7/1 |
| 2     | Hold `Fn` then `.`  | `5` = Bootloader (`QK_BOOT`), `2` = Clear EEPROM (`EE_CLR`)       |

## VIA

The `default_sp` keymap has VIA enabled (`VIA_ENABLE = yes`). The Hermes SP is not in VIA's official keyboard repository, so VIA will report *"could not find a v3 definition for Hermes SP"* until you load the definition yourself:

1. Open [usevia.app](https://usevia.app) in a Chromium-based browser (Chrome, Edge).
2. Open **Settings** and turn on **Show Design tab**.
3. In the **Design** tab, make sure **Use V2 definitions (deprecated)** is **off**.
4. Click **Load** and select `southpaw_via.json` from this folder. It should show *NyxKeys Hermes SP* with VID `0x1210` / PID `0x201B`.
5. Switch to **Configure**. If the keyboard doesn't show up, unplug and replug it, then authorize it again.

The loaded definition is stored in your browser, so repeat these steps if you change browsers or clear site data.

In the **Layouts** tab, set the Plus, Enter and Zero options to match your physical build. They default to **2U**; choose **Split** for any position fitted with two 1U keys.

If VIA shows the wrong keys after reflashing, clear the EEPROM (`Fn` + `.` + `2`, or Bootmagic reset below) so VIA reloads the default keymap.

## Bootloader

Enter the bootloader in 3 ways:

- **Bootmagic reset**: Hold the F1 key (top-right, matrix position 0,0) while plugging in the keyboard. This also clears the EEPROM.
- **Physical reset button**: Briefly press the button on the back of the PCB
- **Keycode in layout**: Hold `Fn`, then hold `.`, then press `5` (`QK_BOOT` on layer 2)
