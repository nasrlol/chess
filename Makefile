CC = gcc
FLAGS = -lX11

SRC = main.c
OBJ = $(SRC:.c=.o)
EXEC = chess

run:
	$(CC) $(OBJ) -o $(EXEC) $(FLAGS) 

clean:
	rm -f $(OBJ) $(EXEC)
