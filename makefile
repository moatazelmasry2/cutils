CC = gcc
CFLAGS = -g -O2

file : tsearch
	$(CC) $(CFLAGS) -c tsearch.c

