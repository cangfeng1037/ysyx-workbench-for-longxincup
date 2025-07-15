CC = gcc
CFLAGS = -Wall -g
TARGET = ex10
SRC = ex10.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)

.PHONY: all clean