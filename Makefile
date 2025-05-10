CC = gcc
ARGS = -g3 -Wall

7-1: main.c
	$(CC) $(ARGS) -o lower main.c
	cp lower upper

.PHONY: clean
clean:
	rm -rf lower upper
