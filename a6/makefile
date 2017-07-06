CC=g++
CCFLAGS= -std=c++11 -Wall

all: assign6

assign6:assign6.o Rational.o
	$(CC) $(CCFLAGS) -o assign6 assign6.o Rational.o
assign6.o:assign6.cc
	$(CC) $(CCFLAGS) -c assign6.cc
Rational.o:Rational.cc Rational.h
	$(CC) $(CCFLAGS) -c Rational.cc
run:
	./assign6
clean:
	rm *.o *.exe



