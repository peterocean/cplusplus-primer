CFLAGS = -std=c++11 
CC = g++

ex13.4:ex13.4.o point.o
	$(CC) $(CFLAGS) -o $@ $^
ex13.4.o:ex13.4.cpp point.h
	$(CC) $(CFLAGS) -c ex13.4.cpp
point.o:point.cpp point.h
	$(CC) $(CFLAGS) -c point.cpp
clean:
	rm ex13.4 *.o
