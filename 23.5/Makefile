all: main

main: main.o ret_ptr.o
	gcc $^   -o $@

main.o: main.c  ret_ptr.h
ret_ptr.o:ret_ptr.c ret_ptr.h

clean:
	-rm main *.o            
