##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## A Lib Makefile
##

NAME	=	myprintf.a

DIRECTORY_BASE	=	./../../

INCLUDE	=	$(DIRECTORY_BASE)include/

SRC 	=	$(addprefix fct/,  	\
			fct_mini_printf_and_n.c	\
			fct_unsigned_int.c	\
			fct_double_and_ptr.c	\
			fct_g_annex.c	\
			fct_m.c	\
			) 	\
			$(addprefix l_fct/, 	\
			l_fct_mini_printf_and_n.c	\
			l_fct_unsigned_int.c	\
			) 	\
			$(addprefix ll_fct/, 	\
			ll_fct_mini_printf_and_n.c	\
			ll_fct_unsigned_int.c	\
			) 	\
			$(addprefix h_fct/, 	\
			h_fct_mini_printf_and_n.c	\
			h_fct_unsigned_int.c	\
			)	\
			$(addprefix hh_fct/, 	\
			hh_fct_mini_printf_and_n.c	\
			hh_fct_unsigned_int.c	\
			) 	\
			conversion_base.c	\
			fill.c	\
			flag.c	\
			ld_to_s.c	\
			my_decimal.c	\
			my_intlen.c	\
			my_printf.c	\
			my_put_float.c	\
			scientific.c	\

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
