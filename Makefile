##
## EPITECH PROJECT, 2021
## makefile
## File description:
## Makefile
##

NAME	=   libmy.a

all: 
	$(MAKE) -C ./lib/my

clean:
	$(RM) ./lib/my/*~
	$(MAKE) -C ./lib/my clean
	gcc -o sah main.c libmy.a

fclean: clean
	$(MAKE) $(NAME)
	$(MAKE) -C ./lib/my fclean
	$(RM) libmy.a
	rm -f sah

re: 	fclean all