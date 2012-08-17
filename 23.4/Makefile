all: main

main: main.o para_allocator.o
	gcc $^  -g -o $@

main.o: main.c para_allocator.o
para_allocator.o: para_allocator.c para_allocator.h

clean:
	-rm main *.o            
