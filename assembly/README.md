# Assembly Guide

good luck

# BOM/Parts List

 - 12x Cherry MX switches
 - 1x [Seeed Studio XIAO RP2040](https://wiki.seeedstudio.com/XIAO-RP2040/)
 - 12x through-hole 1N4148 Diodes
 - 1x 0.91 inch OLED display (make sure to find one with the pin order GND-VCC-SCL-SDA)
 - 12x DSA keycaps
 - 12x SK6812 MINI-E LEDs
 - 6 M3x16mm screws
 - 2x 7pin pin headers
 - 1x 4pin pin header
 - 1x PCB (Refer to the [KiCad section](../kicad/README.md) for ordering)
 - 1x Case (2 parts)

# Component soldering guide

**Make sure to slot the switches into the case first, place the PCB into the top case and then solder the switches!!!**

I won't teach you how to solder, however, I found a [nice guide](https://github.com/zzeneg/stront/tree/main/build-guide/choc#leds) for solering the SK6812 LEDs that I use for people that aren't that experienced.

Just solder the diodes and LEDs first, then the display and microcontroller, **make sure to snip the long leads off of the pin headers once soldered** and then do the switches

# Actual assembly guide
### step 1:
to reiterate, make sure the switches by slotting them into the plate and ***then*** soldering them to the PCB

### step 2:
after soldering everything and getting the switches soldered, install the [firmware](../qmk/README.md) on the microcontrolller.

### step 3:
screw in the bottom plate

### step 4:
profit