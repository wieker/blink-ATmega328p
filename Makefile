# Zheng Hao Tan
# Makefile for the blink application.
# Type 'make' and then whatever that follows to compile the code.

all: blink.o
	avrdude -c usbasp -p m32u2 -U flash:w:blink.hex

blink.o: blink.c 
	avr-gcc -mmcu=atmega32u2 -Wall -Os -o blink.elf blink.c
	avr-objcopy -j .text -j .data -O ihex blink.elf blink.hex

# make clean - remove .o files and the executable file.
clean:
	rm -f *.o blink.hex blink.elf 

# That's all folks!
