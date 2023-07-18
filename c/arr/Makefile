
CC=clang # variables

all: hello # dont have to specify target


test.o: test.c
	$(CC) -c test.c -o test.o

hello: hello.c
	$(CC) -o hello hello.c

clean: # delete generated files
	rm test.o hello
