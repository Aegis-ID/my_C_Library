/*
** EPITECH PROJECT, 2023
** fct_p
** File description:
** print ptr
*/

#include <stdlib.h>
#include <stdarg.h>
#include "printf/printf.h"
#include "base.h"

int print_ptr(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    char add = 0;
    int format = 0;
    long unsigned int ptr = va_arg(ap, long unsigned int);
    char *nb_str = convert_base(ptr, 16, 0);

    if (ptr == 0) {
        free_flag_str(flag, nb_str);
        return len + my_putstr("(nil)");
    }
    get_other_flag(flag[0], &format, &add);
    len += ptr_print_fill_front(format, my_strlen(nb_str), add, width);
    len += my_putstr(nb_str);
    if (format == 3)
        len += treat_width(width, my_strlen(nb_str), ' ');
    free_flag_str(flag, nb_str);
    return len;
}

int print_scientific(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    int precision;
    char add = 0;
    int format = 0;
    char *nb_str;

    if (*flag[2] == '\0')
        precision = 6;
    else
        precision = my_getnbr(flag[2] + 1);
    nb_str = scientific(va_arg(ap, double), precision);
    get_other_flag(flag[0], &format, &add);
    len += fill_front(format, nb_str, add, width);
    len += my_putstr(nb_str);
    if (format == 3)
        len += treat_width(width, my_strlen(nb_str), ' ');
    free_flag_str(flag, nb_str);
    return len;
}

int print_float(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    int precision;
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
    free_flag_str(flag, nb_str);
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
