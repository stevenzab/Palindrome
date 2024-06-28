##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Make file of the ... project
##

SRCS	=	main.c	\
			src/handling_errors/handle_errors.c	\
			src/handling_errors/error_params.c		\
			src/palindrome.c	\
			src/revstr.c 	\
			src/base.c		\
			src/operate_palindrome.c	\
			src/handling_errors/error_flag.c	\
			requirement.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	palindrome

RM	=		rm -f

INC	=		-Iinclude -lm

CC = gcc

CPPFLAGS = $(INC)

CFLAGS	= -W -Wall -Wextra -g

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(CPPFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
