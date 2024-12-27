# MonakaPad

MonakaPad - A customizable left-hand mechanical keyboard for gaming.

* Keyboard Maintainer: [ymkn](https://github.com/ymkn)

Make example for this keyboard (after setting up your build environment):

    make ymkn/MonakaPad:vial

Flashing example for this keyboard:

1. Enter the bootloader.
2. Simply copy ymkn_MonakaPad_vial.uf2 to RPI_RP2 drive.

This keyboard supports [Vial](https://get.vial.today/) configurator.

## Bootloader

Enter the bootloader in 2 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the XIAO RP2040 - some may have pads you must short instead
