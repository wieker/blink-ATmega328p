dfu-programmer atmega32u2 reset
sleep 1
dfu-programmer atmega32u2 erase
sleep 1
dfu-programmer atmega32u2 flash blink.hex
sleep 1
dfu-programmer atmega32u2 reset
