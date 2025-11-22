# QMK Userspace - Geoff's Keyboards

This repository contains my personal QMK keyboard configurations using the QMK Userspace feature.

## Keyboards

### a_test - Handwired Split Dactyl Manuform

A handwired split ergonomic keyboard with:
- RP2040-Zero controllers (both sides)
- PMW3389 trackball on the right side
- 70 keys total
- Serial USART communication between halves
- Auto-mouse layer support
- Caps Word (both shifts activation)

#### Keymaps

- **force_left**: Left half firmware with hardcoded handedness
- **force_right**: Right half firmware with hardcoded handedness
- **geoffmiller**: My personal default keymap

## Setup

### Prerequisites

1. Install QMK CLI:
   ```bash
   python3 -m pip install --user qmk
   ```

2. Setup QMK:
   ```bash
   qmk setup
   ```

### Using this Userspace

1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/qmk_userspace.git ~/qmk_userspace
   cd ~/qmk_userspace
   ```

2. Set QMK userspace:
   ```bash
   qmk config user.overlay_dir="$(realpath .)"
   ```

3. Compile firmware:
   ```bash
   # For left half
   qmk compile -kb handwired/a_test -km force_left
   
   # For right half
   qmk compile -kb handwired/a_test -km force_right
   ```

4. Flash firmware:
   ```bash
   # Flash left half (put left controller in bootloader mode first)
   qmk flash -kb handwired/a_test -km force_left
   
   # Flash right half (put right controller in bootloader mode first)
   qmk flash -kb handwired/a_test -km force_right
   ```

## Features

### Caps Word
Press both shift keys simultaneously to activate Caps Word mode. This capitalizes letters until you press space, enter, or any non-letter key.

### Auto-Mouse Layer
Moving the trackball automatically activates Layer 3 (mouse layer) for easy access to mouse buttons and scroll wheels.

### Layer Overview

**Layer 0 (Base)**
- Standard QWERTY layout
- Volume up/down on thumb clusters
- Layer tap keys for easy layer access

**Layer 1 (Symbols)**
- Brackets and parentheses
- Arrow keys on right hand
- QK_BOOT on left thumb cluster

**Layer 2 (Function)**
- F1-F11 keys
- Mouse scroll wheel controls
- Arrow keys
- QK_BOOT on right thumb cluster

**Layer 3 (Auto-Mouse)**
- Automatically activated by trackball movement
- Mouse buttons
- Scroll wheels

## Hardware

### Wiring

**Left Half:**
- Rows: GP11, GP12, GP13, GP14, GP15
- Columns: GP4, GP5, GP6, GP7, GP8, GP9, GP10
- Serial TX: GP0
- Serial RX: GP1

**Right Half:**
- Rows: GP11, GP12, GP13, GP14, GP15
- Columns: GP4, GP5, GP6, GP7, GP8, GP9, GP10
- Serial TX: GP0
- Serial RX: GP1
- SPI (Trackball):
  - SCK: GP18
  - MOSI: GP19
  - MISO: GP20
  - CS: GP21

### Known Issues

- Short between column 3 and column 6 on right half causing period and shift to trigger together (hardware issue)

## Building from Source

This keyboard definition is designed to work with QMK Firmware. The files in this repository should be placed in your QMK userspace directory.

### Directory Structure

```
qmk_userspace/
├── qmk.json
├── README.md
└── keyboards/
    └── handwired/
        └── a_test/
            ├── config.h
            ├── keyboard.json
            ├── mcuconf.h
            ├── readme.md
            └── keymaps/
                ├── geoffmiller/
                │   ├── keymap.c
                │   └── rules.mk
                ├── force_left/
                │   ├── config.h
                │   ├── keymap.c
                │   └── rules.mk
                └── force_right/
                    ├── config.h
                    ├── keymap.c
                    └── rules.mk
```

## License

GPL-2.0-or-later

## Credits

- QMK Firmware: https://qmk.fm/
- Dactyl Manuform design: https://github.com/abstracthat/dactyl-manuform
