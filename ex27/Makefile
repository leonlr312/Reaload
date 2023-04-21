NAME = ft_display_file

SRC = ft_display_file.c
OBJ = $(SRC:%.c=%.o)

%.o: %.c
	gcc -Wall -Werror -Wextra -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	gcc -Wall -Werror -Wextra $< -o $@

clean:
	rm -f ft_display_file.o

fclean: clean
	rm -f ft_display_file

.PHONY: all clean fclean
