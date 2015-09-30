CFLAGS = -std=c++11 
CC = g++

ex13.8:ex13.8.o hasptr.o
	$(CC) $(CFLAGS) -o $@ $^
ex13.8.o:ex13.8.cpp hasptr.h
	$(CC) $(CFLAGS) -c ex13.8.cpp
hasptr.o:hasptr.cpp hasptr.h
	$(CC) $(CFLAGS) -c hasptr.cpp
clean:
	rm ex13.8 *.o
