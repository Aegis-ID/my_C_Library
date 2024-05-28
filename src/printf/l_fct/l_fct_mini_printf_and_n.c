/*
** EPITECH PROJECT, 2023
** functions id, s, n, c
** File description:
** part1 comme jojo
*/

#include <stdlib.h>
#include <stdarg.h>
#include "printf/printf.h"
#include "base.h"

int l_print_nbr(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    int precision = my_getnbr(flag[2] + 1);
    char add = 0;
    int format = 0;
    char *nb_str = ld_to_s(va_arg(ap, long int), precision);
    int print_len = 0;

    get_other_flag(flag[0], &format, &add);
    print_len += fill_front(format, nb_str, add, width);
    print_len += my_putstr(nb_str);
    if (format == 3)
        print_len += treat_width(width, print_len, ' ');
    free_flag_str(flag, nb_str);
    return len + print_len;
}

int l_register_len(va_list ap, int len, char **flag)
{
    for (int i = 0; i < 6; i++)
        free(flag[i]);
    free(flag);
    *va_arg(ap, long int *) = len;
    return len;
}
