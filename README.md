# Horus 3D Scanner Firmware

This firmware is written in C. Version 0.2.

Derived from Grbl v0.9 by Jesús Arroyo (Mundo Reader S.L.)

Grbl's lead developer is Simen Svale Skogsrud. Sonney Jeon (Chamnit) improved some parts of grbl.


## Features

*   Angular stepper motor movement
*   Interrupt based movement with real angular acceleration
*   Laser modules control
*   Analog sensor read
*   Configuration interface with $ commands

The default baudrate is 115200.


## Implemented G Codes

*   G1   - Angular movement
*   G50  - Reset all positions to zero
*   M0   - Program pause
*   M2   - Program end and reset
*   M17  - Enable/Power stepper motor
*   M18  - Disable stepper motor
*   M50  - Read LDR
*   M70  - Laser off
*   M71  - Laser on

## Build

### Arduino

Open *horus-fw.ino*, select your board and upload.

### Make

```bash
sudo apt-get install gcc-avr avr-libc
make
```

The binary *horus-fw.hex* can be flashed with [Horus GUI](https://github.com/bqlabs/horus).
