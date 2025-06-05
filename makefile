CC=gcc
CFLAGS=-Wall -I./src
SRC=src/main.c src/json.c
OBJ=$(SRC:.c=.o)
OUT=build/proyecto

all: $(OUT)

$(OUT): $(SRC)
	mkdir -p build
	$(CC) $(CFLAGS) $(SRC) -lcjson -o $(OUT)

clean:
	rm -rf build