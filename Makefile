NAME = libftprintf.a

CC = cc

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putone.c ft_unint.c ft_countnbr.c \
      ft_nbr.c ft_strlen.c ft_putnbr_base.c ft_putadress.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror -I ./

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean: 
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
