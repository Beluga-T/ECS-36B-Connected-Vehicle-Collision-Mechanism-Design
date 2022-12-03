CC = g++ -std=c++14
CFLAGS = -g -I/opt/homebrew/include
LDFLAGS = -L/opt/homebrew/lib -ljsoncpp

all: final

person.o: person.h
	$(CC) -c $(CFLAGS) person.cpp

vehicle.o:vehicle.h person.h
	$(CC) -c $(CFLAGS) vehicle.cpp

test.o:test.cpp vehicle.h person.h
	$(CC) -c $(CFLAGS) test.cpp

final:test.o vehicle.o person.o
	$(CC) test.o vehicle.o person.o -o final $(LDFLAGS)

clean:
	rm -f *.o final