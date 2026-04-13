CC = gcc
CFLAGS = -Wall -g -fsanitize=address
FILES =  src/comparisons.c 

default: build


build:
	$(CC) $(CFLAGS) $(FILES) src/main.c -o tbin/cinit 


test:
	$(CC) $(CFLAGS) $(FILES) src/test.c -o tbin/test
	./tbin/test


push:
	$(CC) $(CFLAGS) $(FILES) -o ~/.local/bin/cinit

