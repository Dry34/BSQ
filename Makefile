##
## EPITECH PROJECT, 2023
## BSQ
## File description:
## Makefile
##

NAME   =   bsq

CFLAGS =  -Wall -Wextra -Werror -I./include

SRC	=	src/file.c \
		src/free.c \
		src/lines.c \
		src/main.c \
		src/map.c \
		src/square.c \
		src/strmap.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)
		rm -f $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
