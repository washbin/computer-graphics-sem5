CC=gcc
CFLAGS=-g -Wall
LINKFLAGS=-lSDL_bgi -lSDL2 -lm
BIN=graphic-functions dda bresenhams midpointcircle translation scaling

all: $(BIN)

release: CFLAGS=-Wall -O2 -DNDEBUG
release: clean
release: $(BIN)

# $@ is the target i.e $(BIN)
# $^ is dependency list i.e $(BIN).c
%: %.c
	$(CC) $(CFLAGS) $(LINKFLAGS) -o $@ $^

clean:
	$(RM) $(BIN)
