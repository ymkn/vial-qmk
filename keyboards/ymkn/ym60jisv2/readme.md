# YM60JISv2

YM60JISv2 - The next version of YM60JIS, supporting both Gateron LP 3.0 and MX switches.

* Keyboard Maintainer: [ymkn](https://github.com/ymkn)

Make example for this keyboard (after setting up your build environment):

    make ymkn/ym60jisv2:vial

Flashing example for this keyboard:

1. Connect the USB cable while pressing the button on the back to boot the USB DFU bootloader.
2. Flash ymkn_ym60jisv2_vial.bin using a USB DFU-compatible tool such as QMK Toolbox.

This keyboard supports [Vial](https://get.vial.today/) configurator.

## Bootloader

Enter the bootloader in 2 ways:

* **Bootmagic reset**: Hold down the key at (0,0) and (1,13) in the matrix (usually the top left key or Escape and the right 2nd top key or Enter) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the daughterboard
