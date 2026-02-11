# QMK

Make sure you have the [QMK CLI installed](https://docs.qmk.fm/newbs_getting_started) on your system before following this guide

# Building

(assuming your qmk_firmware folder is in your home folder)
```
cp qmk ~/qmk_firmware/keyboard/celestepad
qmk compile --keyboard celestepad --keymap default
```

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

## Bootloader

Enter the bootloader by holding down the top left key. 