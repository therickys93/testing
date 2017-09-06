default: libtesting.a
	
install: default
	cp libtesting.a /usr/local/lib
	cp testing.h /usr/local/include
	
test: main
	./main

main: libtesting.a
	gcc -o main main.c libtesting.a

libtesting.a: testing.o
	ar -cvq libtesting.a testing.o

testing.o:
	gcc -Wall -c testing.c

clean:
	rm testing.o
	rm libtesting.a
	rm main