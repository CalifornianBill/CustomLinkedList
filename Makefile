CC = g++

all: hw06a

hw06a: hw06a.h hw06a.cpp createList.o printList.o reverseList.o
	$(CC) hw06a.cpp -o hw06a createList.o printList.o reverseList.o

createList.0: hw06a.h createList.cpp
	$(CC) -c createList.cpp -o createList.o

printList.0: hw06a.h printList.cpp
	$(CC) -c printList.cpp -o printList.o

reverseList.0: hw06a.h reverseList.cpp
	$(CC) -c reverseList.cpp -o reverseList.o


