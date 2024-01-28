all:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p 4bitnum.c -o 4bitnum.elf
	avr-objcopy -O ihex -R .eeprom 4bitnum.elf 4bitnum.ihex
	sudo avrdude -F -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:4bitnum.ihex
	
