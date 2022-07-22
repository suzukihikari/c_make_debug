# Makefile2
hello: hello.o lib.o
	gcc -Wall -O2 -o hello hello.o lib.o

hello.o: hello.c
	gcc -g -c hello.c

lib.o: lib.c
	gcc -g -c lib.c