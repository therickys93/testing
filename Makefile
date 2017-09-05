test: main
	./main

main: testing.a
	gcc -o main main.c testing.a

testing.a: testing.o
	ar -cvq testing.a testing.o

testing.o:
	gcc -Wall -c testing.c

clean:
	rm main
	rm testing.o
	rm testing.a