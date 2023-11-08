/*
** EPITECH PROJECT, 2023
** functions id, s, n, c
** File description:
** part1 comme jojo
*/

#include <stdlib.h>
#include <stdarg.h>
#include "include/my.h"

int h_print_nbr(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    int precision = my_getnbr(flag[2] + 1);
    char add = 0;
    int format = 0;
    char *nb_str = ld_to_s((short int) va_arg(ap, int), precision);
    int print_len = 0;

    get_other_flag(flag[0], &format, &add);
    print_len += fill_front(format, nb_str, add, width);
    print_len += my_putstr(nb_str);
    if (format == 3)
        print_len += treat_width(width, print_len, ' ');
    return len + print_len;
}

int h_register_len(va_list ap, int len, char **flag)
{
    free(flag);
    *(short int *)va_arg(ap, int *) = len;
    return len;
}
