CC = i586-webos-linux-gnu-gcc

all: rootsh

rootsh: rootsh.c
	$(CC) -o rootsh -s rootsh.c

.PHONY: clean

clean:
	rm -f rootsh