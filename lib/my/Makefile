##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC	=	$(wildcard *.c)

OBJ    =    $(SRC:.c=.o)

NAME	=   libmy.a

all: 	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../../

clean : 
	rm -f $(OBJ)

fclean :
	rm -f $(NAME)

re : fclean all