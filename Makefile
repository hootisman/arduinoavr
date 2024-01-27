all:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p led.c -o led.elf
	avr-objcopy -O ihex -R .eeprom led.elf led.ihex
	doas avrdude -F -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:led.ihex
	
