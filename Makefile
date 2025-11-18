NAME = libftprintf.a
SRC = ft_printf.c ft_putchar_fd.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all