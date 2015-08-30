CFLAGS = -std=c++11 
CC = g++

ex12_1:ex12_1.o StrBlob.o
	$(CC) $(CFLAGS) -o $@ $^
ex12_1.o:ex12_1.cpp
	$(CC) $(CFLAGS) -c ex12_1.cpp
StrBlob.o:StrBlob.cpp StrBlob.h
	$(CC) $(CFLAGS) -c StrBlob.cpp
clean:
	rm ex12_1 *.o
