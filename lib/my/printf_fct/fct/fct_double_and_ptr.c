/*
** EPITECH PROJECT, 2023
** fct_p
** File description:
** print ptr
*/

#include <stdarg.h>
#include "include/my.h"

int print_ptr(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    char add = 0;
    int format = 0;
    char *nb = convert_base(va_arg(ap, long unsigned int), 16, 0);

    get_other_flag(flag[0], &format, &add);
    len += ptr_print_fill_front(format, my_strlen(nb), add, width);
    len += my_putstr(nb);
    if (format == 3)
        len += treat_width(width, my_strlen(nb), ' ');
    return len;
}

int print_scientific(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    int precision;
    char add = 0;
    int format = 0;
    double nb = va_arg(ap, double);
    char *nb_str;

    if (*flag[2] == '\0')
        precision = 6;
    else
        precision = my_getnbr(flag[2] + 1);
    nb_str = scientific(nb, precision);
    get_other_flag(flag[0], &format, &add);
    len += fill_front(format, nb_str, add, width);
    len += my_putstr(nb_str);
    if (format == 3)
        len += treat_width(width, my_strlen(nb_str), ' ');
    return len;
}

int print_float(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    int	precision;
    char add = 0;
    int format = 0;
    char *nb_str;

    if (*flag[2] == '\0')
        precision = 6;
    else
        precision = my_getnbr(flag[2] + 1);
    nb_str = my_put_float(va_arg(ap, double), precision);
    get_other_flag(flag[0], &format, &add);
    len += fill_front(format, nb_str, add, width);
    len += my_putstr(nb_str);
    if (format == 3)
        len += treat_width(width, my_strlen(nb_str), ' ');
    return len;
}

int print_g(va_list ap, int len, char **flag)
{
    int precision;
    double min_float = 1.0;
    double max_float = 1.0;
    double nb = va_arg(ap, double);

    if (*flag[2] == '\0')
        precision = 6;
    else
        precision = my_getnbr(flag[2] + 1);
    for (int i = 0; i < precision; i++) {
        min_float /= 10;
        max_float *= 10;
    }
    if (nb < min_float || nb > max_float)
        return print_g_scientific(nb, len, flag, precision);
    else
        return print_g_float(nb, len, flag, precision);
}
