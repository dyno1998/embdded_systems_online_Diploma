#@copyright : Mohanad
CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s  -g
INCS=$(INCS) 
LIBS=
SRS=$(wildcard *.c)
OBJ=$(SRS: .c= .o)
As=$(wildcard *.s)
ASOBJ=$(As: .s= .o)
Project name=learn-in-depth

all: $(Project name).bin
	@echo"build is done"
	
startup.o: startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c  $(INCS) $(CFLAGS) $< -o $@

uart.o: uart.c
	$(CC)gcc.exe -c  $(INCS) $(CFLAGS) $< -o $@

learn-indepth.elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) app.o uart.o $(ASOBJ) -o $@
	
$(Project name).bin: $(Project name).elf
	$(CC)objcopy.exe -O binary $< $@
	
clean_all :
	rm *.o *.elf *.bin
	
clean:
	rm *.elf *.bin

