CFLAGS = -std=c++11 
CC = g++

ex13.18:ex13.18.o employee.o
	$(CC) $(CFLAGS) -o $@ $^
ex13.18.o:ex13.18.cpp employee.h
	$(CC) $(CFLAGS) -c ex13.18.cpp
employee.o:employee.cpp employee.h
	$(CC) $(CFLAGS) -c employee.cpp
clean:
	rm ex13.18 *.o
