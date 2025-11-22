NAME = libftprintf.a
SRC = ft_printf.c \
 ft_putstr.c \
 ft_print_str.c \
 ft_putnbr.c \
 ft_strlen.c \
 ft_putnbr_unsigned.c \
 main.c \

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)


test: $(NAME)
	$(CC) $(CFLAGS) main.c -L. -lftprintf -o test_printf

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all