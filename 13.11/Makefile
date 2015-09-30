CFLAGS = -std=c++11 
CC = g++

ex13.11:ex13.11.o hasptr.o
	$(CC) $(CFLAGS) -o $@ $^
ex13.11.o:ex13.11.cpp hasptr.h
	$(CC) $(CFLAGS) -c ex13.11.cpp
hasptr.o:hasptr.cpp hasptr.h
	$(CC) $(CFLAGS) -c hasptr.cpp
clean:
	rm ex13.11 *.o
