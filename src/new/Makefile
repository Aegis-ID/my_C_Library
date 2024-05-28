##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## A Lib Makefile
##

NAME	=	new.a

DIRECTORY_BASE	=	./../../

INCLUDE	=	$(DIRECTORY_BASE)include/

SRC 	=	are_in_str.c 	\
			array_strlen.c 	\
			array_to_str.c 	\
			arraylen.c 	\
			check_extension.c 	\
			clean_str.c 	\
			count_char_in_str.c 	\
			file_to_str.c 	\
			free_array.c 	\
			get_file_size.c 	\
			get_index_in_array.c 	\
			get_str_in_array.c 	\
			hex_to_int.c 	\
			intlen.c 	\
			is_alpha.c 	\
			is_array_empty.c 	\
			is_digit.c 	\
			is_in_str.c 	\
			is_str_float.c 	\
			is_str_in_ascii.c 	\
			is_str_in_range.c 	\
			is_strdigit.c 	\
			mini_dprintf.c 	\
			mini_fprintf.c 	\
			str_to_word_array.c 	\
			strlen_delim.c 	\

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
