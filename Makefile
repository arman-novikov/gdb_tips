CC=g++
CLFLAGS=-c -Wall
FINAL_LDFLAGS=-no-pie
#LDFLAGS=

all: app

debug: main.o
	$(CC) -g main.o -o app

app: main.o
	$(CC) $(FINAL_LDFLAGS) main.o -o app

main.o: main.cpp
	$(CC) $(CLFLAGS) main.cpp

clean:
	rm -rf *.o app