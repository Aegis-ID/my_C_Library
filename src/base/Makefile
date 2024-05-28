##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## A Lib Makefile
##

NAME	=	base.a

DIRECTORY_BASE	=	./../../

INCLUDE	=	$(DIRECTORY_BASE)include

SRC 	= 	mini_printf.c	\
		my_find_prime_sup.c	\
		my_isneg.c	\
		my_put_nbr.c	\
		my_showmem.c	\
		my_strcapitalize.c	\
		my_strcpy.c	\
		my_str_isnum.c	\
		my_strlen.c	\
		my_strncmp.c	\
		my_strupcase.c	\
		my_sqrt.c	\
		my_getnbr.c	\
		my_is_prime.c	\
		my_putstr.c	\
		my_showstr.c	\
		my_strcat.c	\
		my_str_isalpha.c	\
		my_str_isprintable.c	\
		my_strlowcase.c	\
		my_strncpy.c	\
		my_swap.c	\
		my_sqrt.c	\
		my_putchar.c	\
		my_revstr.c	\
		my_sort_int_array.c	\
		my_strcmp.c	\
		my_str_islower.c	\
		my_str_isuppper.c	\
		my_strncat.c	\
		my_strstr.c	\
		my_strdup.c	\
		my_strndup.c \

CC	?=	gcc

CPPFLAGS	=	-iquote $(INCLUDE)

CFLAGS	=	-Wall -Wextra

OBJ	=	$(SRC:.c=.o)

DEBUG 	= 	-g3

all: $(NAME) clean

$(NAME):	CFLAGS += $(LCSFML)
$(NAME):	$(OBJ)
		$(AR) rcs $(NAME) $(OBJ) && cp $(NAME) $(DIRECTORY_BASE)

clean:
		$(RM) $(OBJ)	\
		$(RM) *log	\

fclean: clean
		$(RM) $(NAME)	\
		$(RM) $(DIRECTORY_BASE)$(NAME)	\

re: fclean all
	$(MAKE) clean

debug: $(CFLAGS) += $(DEBUG)
debug: $(NAME)

.PHONY: all clean fclean re debug
