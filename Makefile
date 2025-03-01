NAME = libftprintf.a

SRC = ft_countnbr.c ft_putadress.c ft_putone.c ft_unint.c ft_unint.c \
      ft_putchar.c ft_putstr.c ft_printf.c ft_putnbr_base.c ft_strlen.c \
	  ft_nbr.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rsc $(NAME) $(OBJ)

clean : 
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : re all clean fclean
