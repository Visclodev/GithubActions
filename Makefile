##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## launch lib Makefile and compile evalexpr
##

NAME	=	name

SRC	=	$(wildcard *.c)

CC = gcc -g

CFLAGS += -I include/ -W -Wall -Wextra -L lib -lmy

OBJ	=	$(SRC:.c=.o)

RM = rm -rf

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	(cd ./lib/my/; make fclean)
	$(RM) $(NAME)

re:	fclean	all
