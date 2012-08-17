all: main

main: main.o populator.o
	gcc $^ -o $@

main.o:main.c populator.h
populator.o:populator.h populator.c

clean:
	-rm main *.o		
