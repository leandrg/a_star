##
## Makefile for astar in /home/leandr_g/Shared/a_star
##
## Made by
## Login   <leandr_g@epitech.net>
##
## Started on  Fri Apr  8 23:35:24 2016
## Last update Fri May 20 01:31:07 2016 Gaëtan Léandre
##

NAME		=	a_star

SRC		=	main.c					\
			src/astar.c				\
			src/init_tab.c				\
			src/go_to.c				\
			src/go_back.c				\
			src/calculs.c				\
			src/read_map.c				\
			src/utils.c

OBJ		=	$(SRC:.c=.o)

CFLAGS		=	-W -Wall -Wextra -ansi -pedantic	\
			-Iinclude

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			gcc -o $(NAME) $(OBJ)

clean		:
			rm -rf $(OBJ)

fclean		:	clean
			rm -rf $(NAME)

re		:	fclean all
