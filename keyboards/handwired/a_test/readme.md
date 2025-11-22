# a_test

This is a handwired dactyly/cosmo w/trackball using RP2040-zeros

- Keyboard Maintainer: geoff
- Hardware Supported: RP2040-Zero
- 3D Print File Source: https://dactyl.mbugert.de/manuform

Make example for this keyboard (after setting up your build environment):

    make handwired/a_test:default

Flashing example for this keyboard:

    make handwired/a_test:default:flash

## Flashing Split Sides

### Initial Setup (One-time)

To ensure the correct handedness for each side, use the specific keymaps for each half. This stores the handedness in EEPROM so it persists across firmware updates.

**Flash Left Side:**
Connect the Left half in bootloader mode and run:

    qmk flash -kb handwired/a_test -km force_left

**Flash Right Side:**
Connect the Right half in bootloader mode and run:

    qmk flash -kb handwired/a_test -km force_right

### Regular Updates

After the initial setup, you can flash the default keymap to either side (or both) and they will remember their handedness:

    qmk flash -kb handwired/a_test -km default

**Note:** You only need to use `force_left` or `force_right` again if you clear the EEPROM or perform a factory reset.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Keymap Layouts

### Layer 0 (Base Layer)

```
Left Half:                                          Right Half:
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐      ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ ESC │  `  │  1  │  2  │  3  │  4  │  5  │      │  6  │  7  │  8  │  9  │  0  │  -  │  =  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ TAB │  Q  │  W  │  E  │  R  │  T  │BTN1 │      │BTN1 │  Y  │  U  │  I  │  O  │  P  │  \  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LSHFT│  A  │  S  │  D  │  F  │  G  │BTN2 │      │VOL+ │  H  │  J  │  K  │  L  │  ;  │ '⇧  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LSHFT│ Z⌃  │  X  │  C  │  V  │  B  │MUTE │      │VOL- │  N  │  M  │  ,  │  .  │  /  │RSHFT│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│  ✗  │  ✗  │ ALT │ GUI │ SPC │LT1⏎ │  ✗  │      │  ✗  │LT2⏎ │BSPC │ GUI │ ALT │  ✗  │  ✗  │
└─────┴─────┴─────┴─────┴─────┴─────┴─────┘      └─────┴─────┴─────┴─────┴─────┴─────┴─────┘

Legend:
- Z⌃   = Hold: Left Ctrl, Tap: Z
- '⇧   = Hold: Right Shift, Tap: '
- LT1⏎ = Hold: Layer 1, Tap: Enter
- LT2⏎ = Hold: Layer 2, Tap: Enter
- BTN1 = Mouse Button 1
- BTN2 = Mouse Button 2
- ✗    = No key
```

### Layer 1 (Navigation & Brackets)

```
Left Half:                                          Right Half:
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐      ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ TO0 │     │     │     │     │     │     │      │     │     │     │  (  │  )  │     │ TO1 │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │     │      │     │     │     │  [  │  ]  │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│CAPS │     │     │     │     │     │     │      │     │     │     │  {  │  }  │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│CAPS │     │     │     │     │     │BOOT │      │     │  ←  │  ↓  │  ↑  │  →  │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│  ✗  │  ✗  │     │     │     │     │  ✗  │      │  ✗  │  ←  │  ↓  │  ↑  │  →  │  ✗  │  ✗  │
└─────┴─────┴─────┴─────┴─────┴─────┴─────┘      └─────┴─────┴─────┴─────┴─────┴─────┴─────┘
```

### Layer 2 (Function Keys & Mouse)

```
Left Half:                                          Right Half:
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐      ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ TO0 │     │ F1  │ F2  │ F3  │ F4  │ F5  │      │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ TO2 │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │ M↑  │     │     │     │      │     │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│CAPS │ M←← │ M←  │ M↓  │ M→  │ M→→ │     │      │     │WHL← │WHL↑ │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│CAPS │     │     │     │     │     │     │      │BOOT │  ←  │  ↓  │  ↑  │  →  │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│  ✗  │  ✗  │     │     │     │     │  ✗  │      │  ✗  │BTN1 │BTN2 │     │     │  ✗  │  ✗  │
└─────┴─────┴─────┴─────┴─────┴─────┴─────┘      └─────┴─────┴─────┴─────┴─────┴─────┴─────┘

Legend:
- M↑/↓/←/→ = Mouse cursor movement
- M←← / M→→ = Mouse left/right (double speed)
- WHL← / WHL↑ = Mouse wheel left/up
```

### Layer 3 (Mouse Layer)

```
Left Half:                                          Right Half:
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐      ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│     │     │     │     │     │     │     │      │     │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │BTN1 │BTN1 │BTN1 │      │     │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │WHL← │WHL↓ │WHL↑ │WHL→ │BTN2 │      │     │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │     │      │     │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┤      ├─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│  ✗  │  ✗  │     │     │     │     │  ✗  │      │  ✗  │     │     │     │     │  ✗  │  ✗  │
└─────┴─────┴─────┴─────┴─────┴─────┴─────┘      └─────┴─────┴─────┴─────┴─────┴─────┴─────┘

Legend:
- WHL↑/↓/←/→ = Mouse wheel up/down/left/right
- BTN1/BTN2 = Mouse buttons 1 and 2
```

## Bootloader

Enter the bootloader in 3 ways:

- **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
- **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
- **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
