##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	gpa_calculator.c

OBJ	=	$(SRC:.c=.o)

NAME	=	gpa_calculator

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -lm

clean:
	rm -f $(OBJ)

fclean:	clean
	-rm -f $(NAME)

re:	fclean all
