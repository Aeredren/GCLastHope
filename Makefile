default: gclasthope_linux
all: gclasthope_linux

gclasthope_linux: gclasthope_linux.o
	gcc -Wall ./bin/main.o -o ./bin/main.elf

gclasthope_linux.o:
	gcc -Wall -c ./src/main.c -o ./bin/main.o
