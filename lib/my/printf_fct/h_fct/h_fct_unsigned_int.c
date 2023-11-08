/*
** EPITECH PROJECT, 2023
** functions x, X, o, u
** File description:
** part 2, jsp le nom dans jojo
*/

#include <stdarg.h>
#include "include/my.h"

int h_convert_o(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    int	precision = my_getnbr(flag[2] + 1);
    char add;
    int format = 0;
    char *str = convert_base((short unsigned int)
        va_arg(ap, int), 8, precision);
    int str_len = my_strlen(str);

    get_other_flag(flag[0], &format, &add);
    len += fill_front(format, str, add, width);
    len += my_putstr(str);
    if (format == 3)
        len += treat_width(width, str_len, ' ');
    return len;
}

int h_convert_x(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    int	precision = my_getnbr(flag[2] + 1);
    char add;
    int format = 0;
    char *str = convert_base((short unsigned int)
        va_arg(ap, int), 16, precision);
    int str_len = my_strlen(str);

    get_other_flag(flag[0], &format, &add);
    len += fill_front(format, str, add, width);
    len += my_putstr(str);
    if (format == 3)
        len += treat_width(width, str_len, ' ');
    return len;
}

int h_convert_x_upcase(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    int p = my_getnbr(flag[2] + 1);
    char add;
    int format = 0;
    char *str = my_strupcase(convert_base((short unsigned int)
        va_arg(ap, int), 16, p));
    int str_len = my_strlen(str);

    get_other_flag(flag[0], &format, &add);
    len += fill_front(format, str, add, width);
    len += my_putstr(str);
    if (format == 3)
        len += treat_width(width, str_len, ' ');
    return len;
}

int h_convert_u(va_list ap, int len, char **flag)
{
    int width = my_getnbr(flag[1]);
    int precision = my_getnbr(flag[2] + 1);
    char add;
    int format = 0;
    char *str = convert_base((short unsigned int)
        va_arg(ap, int), 10, precision);
    int str_len = my_strlen(str);

    get_other_flag(flag[0], &format, &add);
    len += fill_front(format, str, add, width);
    len += my_putstr(str);
    if (format == 3)
        len += treat_width(width, str_len, ' ');
    return len;
}
