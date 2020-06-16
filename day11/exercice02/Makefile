TARGET=	 ft_tail
SRC= $(wildcard *.c)
OBJ= $(SRC: .c=.o)
FLAGS= -Wall -Wextra -Werror
CC= gcc
.PHONY: clean fclean

${TARGET}: ${OBJ}
	${CC} -o $@ $^ ${FLAGS}

clean:
	rm -f *.o

fclean: clean
	rm ${TARGET}  

