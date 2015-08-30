CFLAGS = -std=c++11 
CC = g++

ex12_2:ex12_2.o StrBlob.o
	$(CC) $(CFLAGS) -o $@ $^
ex12_2.o:ex12_2.cpp
	$(CC) $(CFLAGS) -c ex12_2.cpp
StrBlob.o:StrBlob.cpp StrBlob.h
	$(CC) $(CFLAGS) -c StrBlob.cpp
clean:
	rm ex12_2 *.o
