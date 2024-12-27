# Slab40

Slab40 - A 40% size compact keyboard with a low-staggered layout and split spacebar.

* Keyboard Maintainer: [ymkn](https://github.com/ymkn)

Make example for this keyboard (after setting up your build environment):

    make ymkn/slab40:vial

Flashing example for this keyboard:

1. Enter the bootloader.
2. Simply copy ymkn_slab40_vial.uf2 to RPI_RP2 drive.

This keyboard supports [Vial](https://get.vial.today/) configurator.

## Bootloader

Enter the bootloader in 2 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Tab) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the daughterboard
