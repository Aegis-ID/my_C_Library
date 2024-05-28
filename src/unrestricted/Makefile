##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## A Lib Makefile
##

NAME	=	unrestricted.a

DIRECTORY_BASE	=	./../../

INCLUDE	=	$(DIRECTORY_BASE)/include/

SRC 	=	get_str_in_array.c 	\
			str_to_word_array.c \

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
