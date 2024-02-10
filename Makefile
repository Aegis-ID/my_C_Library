##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## compiling library
##

NAME	=	libmy.a

CC		=	gcc

CPPFLAGS	=	-W -Wall -Wextra -g -I ./

MYLIB	=	lib/my_find_prime_sup.c				\
			lib/my_isneg.c						\
			lib/my_put_nbr.c					\
			lib/my_showmem.c					\
			lib/my_strcapitalize.c				\
			lib/my_strcpy.c						\
			lib/my_str_isnum.c					\
			lib/my_strlen.c						\
			lib/my_strncmp.c					\
			lib/my_strupcase.c					\
			lib/my_compute_power_rec.c			\
			lib/my_getnbr.c						\
			lib/my_is_prime.c					\
			lib/my_putstr.c						\
			lib/my_showstr.c					\
			lib/my_strcat.c						\
			lib/my_str_isalpha.c				\
			lib/my_str_isprintable.c			\
			lib/my_strlowcase.c					\
			lib/my_strncpy.c					\
			lib/my_swap.c						\
			lib/my_compute_square_root.c		\
			lib/my_putchar.c					\
			lib/my_revstr.c						\
			lib/my_sort_int_array.c				\
			lib/my_strcmp.c						\
			lib/my_str_islower.c				\
			lib/my_str_isuppper.c				\
			lib/my_strncat.c					\
			lib/my_strstr.c						\
			lib/mini_printf.c					\

MYPRINTF	=	lib/printf_fct/my_put_float.c						\
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

SRC 	=	$(MYLIB) $(MYPRINTF)

OBJ		=	$(SRC:.c=.o)

LIB 	=	ar rc

all:	$(OBJ)
		$(LIB) $(NAME) $(OBJ)

printf:	$(MYPRINTF:.c=.o)
		$(LIB) $(NAME) $(MYPRINTF:.c=.o)

mylib:	$(MYLIB:.c=.o)
		$(LIB) $(NAME) $(MYLIB:.c=.o)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
