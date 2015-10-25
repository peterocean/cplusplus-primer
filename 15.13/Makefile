CFLAGS = -std=c++11 
CC = g++

ex15.14:ex15.14.o base.o derived.o
	$(CC) $(CFLAGS) -o $@ $^
ex15.14.o:ex15.14.cpp  base.h derived.h
	$(CC) $(CFLAGS) -c ex15.14.cpp
	$(CC) $(CFLAGS) -c base.cpp
	$(CC) $(CFLAGS) -c derived.cpp
clean:
	rm ex15.14 *.o
