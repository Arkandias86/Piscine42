NAME = ft_display_file
SRC = $(wildcard *.c)
.PHONY: all clean fclean

all : ${NAME}

${NAME}: *.o
	gcc -Wall -Wextra -Werror -o $@ $<

%.o: %.c
	gcc -Wall -Wextra -Werror -c $<

clean:
	rm -f *o

fclean: clean
	rm -f ${NAME}

