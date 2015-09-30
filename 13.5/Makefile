CFLAGS = -std=c++11 
CC = g++

ex13.5:ex13.5.o hasptr.o
	$(CC) $(CFLAGS) -o $@ $^
ex13.5.o:ex13.5.cpp hasptr.h
	$(CC) $(CFLAGS) -c ex13.5.cpp
hasptr.o:hasptr.cpp hasptr.h
	$(CC) $(CFLAGS) -c hasptr.cpp
clean:
	rm ex13.5 *.o
