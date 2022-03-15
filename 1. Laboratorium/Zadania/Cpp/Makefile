CC = g++
C_OPT=-O3
C_FLAGS=-g -Wall -Wconversion -Werror $(C_OPT)

FILE_NAME=main

TARGET=compile

all: $(TARGET)

compile:
	$(CC) $(C_FLAGS) $(FILE_NAME).cpp -o $(FILE_NAME)

clean:
	rm $(FILE_NAME)
