all: struct.o structs.h
	gcc -o program struct.o

struct.o:
	gcc -c struct.c

run:
	./program
	rm *.o
