OBJS=assert_bool.o assert_equals.o assert_disequals.o
SOURCE=assert_bool.c assert_equals.c assert_disequals.c

default: libtesting.a
	
install: default
	cp libtesting.a /usr/local/lib
	cp testing.h /usr/local/include
	
test: main
	./main

main: libtesting.a
	gcc -o main main.c libtesting.a

libtesting.a: objects
	ar -cvq libtesting.a $(OBJS)

objects:
	gcc -Wall -c $(SOURCE)

build: clean
	bash build.sh

clean:
	rm $(OBJS)
	rm libtesting.a
	rm main