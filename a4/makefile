CC=g++
CCFLAGS= -std=c++11 -Wall

all: assign10

assign10:assign10.o shape.o shape2.o shape3.o
	$(CC) $(CCFLAGS) -o assign10 assign10.o  shape2.o shape3.o   

assign10.o:assign10.cc
	$(CC) $(CCFLAGS) -c assign10.cc

shape.o:shape.h
	$(CC) $(CCFLAGS) -c shape.h

shape2.o:shape2.cc shape2.h
	$(CC) $(CCFLAGS) -c shape2.cc

shape3.o:shape3.cc shape3.h
	$(CC) $(CCFLAGS) -c shape3.cc



run:
	./assign10
clean:
	rm *.o *.exe



