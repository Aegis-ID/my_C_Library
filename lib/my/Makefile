##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## compiling library
##


NAME	=	libmy.a

CC	=	gcc

CPPFLAGS	=	-W -Wall -Wextra -g -I ../../

SRC	=	my_find_prime_sup.c								\
		my_isneg.c										\
		my_put_nbr.c									\
		my_showmem.c									\
		my_strcapitalize.c								\
		my_strcpy.c										\
		my_str_isnum.c									\
		my_strlen.c										\
		my_strncmp.c									\
		my_strupcase.c									\
		my_compute_power_rec.c							\
		my_getnbr.c										\
		my_is_prime.c									\
		my_putstr.c										\
		my_showstr.c									\
		my_strcat.c										\
		my_str_isalpha.c								\
		my_str_isprintable.c							\
		my_strlowcase.c									\
		my_strncpy.c									\
		my_swap.c										\
		my_compute_square_root.c						\
		my_putchar.c									\
		my_revstr.c										\
		my_sort_int_array.c								\
		my_strcmp.c										\
		my_str_islower.c								\
		my_str_isuppper.c								\
		my_strncat.c									\
		my_strstr.c										\
		printf_fct/my_put_float.c						\
		printf_fct/scientific.c							\
		printf_fct/conversion_base.c					\
		printf_fct/ld_to_s.c							\
		printf_fct/fill.c								\
		printf_fct/flag.c								\
		printf_fct/my_intlen.c							\
		printf_fct/my_decimal.c							\
        printf_fct/fct/fct_mini_printf_and_n.c          \
        printf_fct/fct/fct_unsigned_int.c               \
        printf_fct/fct/fct_double_and_ptr.c             \
        printf_fct/fct/fct_g_annex.c                    \
        printf_fct/fct/fct_m.c							\
		printf_fct/l_fct/l_fct_mini_printf_and_n.c		\
		printf_fct/l_fct/l_fct_unsigned_int.c			\
		printf_fct/ll_fct/ll_fct_mini_printf_and_n.c	\
		printf_fct/ll_fct/ll_fct_unsigned_int.c			\
		printf_fct/h_fct/h_fct_mini_printf_and_n.c		\
		printf_fct/h_fct/h_fct_unsigned_int.c			\
		printf_fct/hh_fct/hh_fct_mini_printf_and_n.c	\
		printf_fct/hh_fct/hh_fct_unsigned_int.c			\
		mini_printf.c									\
		my_printf.c

OBJ		=	$(SRC:.c=.o)

LIB 	=	ar rc

all:	$(OBJ)
		$(LIB) $(NAME) $(OBJ)
		cp $(NAME) ../../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
