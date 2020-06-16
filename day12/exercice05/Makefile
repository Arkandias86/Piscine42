TARGET = ft_op
SRC = $(wildcard *.c)
OBJ = $(SRC:.c =.o)
FLAG = -Wall -Wextra -Werror
CC = gcc

$(TARGET): $(OBJ)
	$(CC) $(FLAG) $^  -o $@

.PHONY: clean fclean

clean:
	rm -f *.o
fclean: clean
	rm -f $(TARGET)
