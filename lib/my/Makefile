##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## compile and work with the files of this repo
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

RM	=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp libmy.a ../libmy.a
	mkdir -p ../../include
	cp my.h ../../include/my.h

clean:
	rm -rf *.o

fclean:	clean
	$(RM) $(OBJ)
	$(RM) ../libmy.a

re:	fclean	all
