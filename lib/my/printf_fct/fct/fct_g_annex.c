/*
** EPITECH PROJECT, 2023
** g annex
** File description:
** fct used by %g
*/

#include "include/my.h"

int units_len(double nb)
{
    int i;

    if (nb < 0)
        nb = -nb;
    for (i = 0; nb > 1; i++) {
        nb /= 10;
    }
    return i;
}

int print_g_scientific(double nb, int len, char **flag, int precision)
{
    int width = my_getnbr(flag[1]);
    char add = 0;
    int format = 0;
    char *nb_str = scientific(nb, precision);

    get_other_flag(flag[0], &format, &add);
    len += fill_front(format, nb_str, add, width);
    len += my_putstr(nb_str);
    if (format == 3)
        len += treat_width(width, my_strlen(nb_str), ' ');
    return len;
}

int print_g_float(double nb, int len, char **flag, int precision)
{
    int width = my_getnbr(flag[1]);
    char add = 0;
    int format = 0;
    int last_digit = precision - units_len(nb);
    char *nb_str = my_put_float(nb, last_digit);

    get_other_flag(flag[0], &format, &add);
    len += fill_front(format, nb_str, add, width);
    len += my_putstr(nb_str);
    if (format == 3)
        len += treat_width(width, my_strlen(nb_str), ' ');
    return len;
}
