##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	lib/my_put_nbr.c	\
		lib/my_putchar.c	\
		lib/my_isneg.c	\
		src/my_printf.c	\
		lib/my_putstr.c	\
		lib/my_revstr.c	\
		src/my_put_nbr_base.c	\
		lib/my_strlen.c	\
		src/handle_s.c	\
		src/print.c	\
		src/print2.c

OBJ	=	$(SRC:.c=.o)

CFLAGS 	= 	-g

CPPFLAGS	=	-I ./include

NAME	=	libprintf.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc -o $(NAME) $(OBJ)
	cp $(NAME) ../../
	cp include/my_printf.h ../../include

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f *#
	rm -f *gcda
	rm -f *gcno

fclean:	clean
	rm -f $(NAME)
	rm -f a.out unit_tests

re:	fclean all
