/*
** EPITECH PROJECT, 2023
** functions id, s, n, c
** File description:
** part1 comme jojo
*/

#include <stdlib.h>
#include <stdarg.h>
#include "include/my.h"

int print_char(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    char add;
    int format = 0;

    get_other_flag(flag[0], &format, &add);
    if (format != 3)
        len += treat_width(width, 1, ' ');
    len += my_putchar((char) va_arg(ap, int));
    if (format == 3)
        len += treat_width(width, 1, ' ');
    return len;
}

int print_str(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    char add;
    int format = 0;
    char *str = va_arg(ap, char *);
    int str_len = my_strlen(str);

    get_other_flag(flag[0], &format, &add);
    if (format != 3)
        len += treat_width(width, str_len, ' ');
    len += my_putstr(str);
    if (format == 3)
        len += treat_width(width, str_len, ' ');
    return len;
}

int print_nbr(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    int precision = my_getnbr(flag[2] + 1);
    char add = 0;
    int format = 0;
    char *nb_str = ld_to_s(va_arg(ap, int), precision);
    int print_len = 0;

    get_other_flag(flag[0], &format, &add);
    print_len += fill_front(format, nb_str, add, width);
    print_len += my_putstr(nb_str);
    if (format == 3)
        print_len += treat_width(width, print_len, ' ');
    return len + print_len;
}

int register_len(va_list ap, int len, char **flag)
{
    free(flag);
    *va_arg(ap, int *) = len;
    return len;
}
