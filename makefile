# Simple Makefile for Tic-Tac-Toe project

# Compiler to use
CC = gcc

# Compiler flags (enable warnings)
CFLAGS = -Wall -Wextra

# Target executable name
TARGET = tictactoe

# Source files
SRC = main.c game.c

# Object files (replace .c with .o)
OBJ = $(SRC:.c=.o)

# Default rule (builds the project)
all: $(TARGET)

# How to build the executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

# Clean rule (delete compiled files)
clean:
	rm -f $(OBJ) $(TARGET)
