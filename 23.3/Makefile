all: main

main: main.o redirect_ptr.o
	gcc $^ -o $@

main.o: main.c redirect_ptr.h
redirect_ptr.o: redirect_ptr.h redirect_ptr.c

clean:
	-rm main *.o            
		                                          

