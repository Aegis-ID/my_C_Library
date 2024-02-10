##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## compiling library
##

NAME	=	libmy.a

CC		=	gcc

CPPFLAGS	=	-W -Wall -Wextra -g -I ./

BASE	=	lib/base_funcs/my_find_prime_sup.c				\
			lib/base_funcs/my_isneg.c						\
			lib/base_funcs/my_put_nbr.c						\
			lib/base_funcs/my_showmem.c						\
			lib/base_funcs/my_strcapitalize.c				\
			lib/base_funcs/my_strcpy.c						\
			lib/base_funcs/my_str_isnum.c					\
			lib/base_funcs/my_strlen.c						\
			lib/base_funcs/my_strncmp.c						\
			lib/base_funcs/my_strupcase.c					\
			lib/base_funcs/my_compute_power_rec.c			\
			lib/base_funcs/my_getnbr.c						\
			lib/base_funcs/my_is_prime.c					\
			lib/base_funcs/my_putstr.c						\
			lib/base_funcs/my_showstr.c						\
			lib/base_funcs/my_strcat.c						\
			lib/base_funcs/my_str_isalpha.c					\
			lib/base_funcs/my_str_isprintable.c				\
			lib/base_funcs/my_strlowcase.c					\
			lib/base_funcs/my_strncpy.c						\
			lib/base_funcs/my_swap.c						\
			lib/base_funcs/my_compute_square_root.c			\
			lib/base_funcs/my_putchar.c						\
			lib/base_funcs/my_revstr.c						\
			lib/base_funcs/my_sort_int_array.c				\
			lib/base_funcs/my_strcmp.c						\
			lib/base_funcs/my_str_islower.c					\
			lib/base_funcs/my_str_isuppper.c				\
			lib/base_funcs/my_strncat.c						\
			lib/base_funcs/my_strstr.c						\
			lib/base_funcs/mini_printf.c					\

NEW		=	lib/new_funcs/check_file_extension.c			\
			lib/new_funcs/my_readfile.c						\

CSFML	=	lib/csfml_funcs/int_to_str.c 					\

PRINTF	=	lib/printf_fct/my_put_float.c						\
			lib/printf_fct/scientific.c							\
			lib/printf_fct/conversion_base.c					\
			lib/printf_fct/ld_to_s.c							\
			lib/printf_fct/fill.c								\
			lib/printf_fct/flag.c								\
			lib/printf_fct/my_intlen.c							\
			lib/printf_fct/my_decimal.c							\
			lib/printf_fct/fct/fct_mini_printf_and_n.c			\
			lib/printf_fct/fct/fct_unsigned_int.c				\
			lib/printf_fct/fct/fct_double_and_ptr.c				\
			lib/printf_fct/fct/fct_g_annex.c					\
			lib/printf_fct/fct/fct_m.c							\
			lib/printf_fct/l_fct/l_fct_mini_printf_and_n.c		\
			lib/printf_fct/l_fct/l_fct_unsigned_int.c			\
			lib/printf_fct/ll_fct/ll_fct_mini_printf_and_n.c	\
			lib/printf_fct/ll_fct/ll_fct_unsigned_int.c			\
			lib/printf_fct/h_fct/h_fct_mini_printf_and_n.c		\
			lib/printf_fct/h_fct/h_fct_unsigned_int.c			\
			lib/printf_fct/hh_fct/hh_fct_mini_printf_and_n.c	\
			lib/printf_fct/hh_fct/hh_fct_unsigned_int.c			\
			lib/base_funcs/my_printf.c

SRC 	=	$(BASE) $(NEW) $(CSFML) $(PRINTF)

OBJ		=	$(SRC:.c=.o)

LIB 	=	ar rc


base:	$(BASE:.c=.o)
		$(LIB) base.a $(BASE:.c=.o)

new:	$(NEW:.c=.o)
		$(LIB) new.a $(NEW:.c=.o)

csfml:	$(CSFML:.c=.o)
		$(LIB) csfml.a $(CSFML:.c=.o)

printf:	$(PRINTF:.c=.o)
		$(LIB) printf.a $(PRINTF:.c=.o)

all:	$(OBJ)
		$(LIB) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f base.a
	rm -f new.a
	rm -f csfml.a

re:	fclean all
