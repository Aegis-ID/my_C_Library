/*
** EPITECH PROJECT, 2023
** fill
** File description:
** fill with space or 0 for the given width
*/

#include "include/my.h"

int print_flag(char **flag)
{
    int len = 0;

    len += my_putchar('%');
    len += my_putstr(flag[0]);
    len += my_putstr(flag[1]);
    if (*flag[2] == '.') {
        len += my_putchar('.');
        len += my_put_nbr(my_getnbr(flag[2] + 1));
        len += my_putstr(flag[2] + 1);
    }
    len += my_putstr(flag[3]);
    len += my_putchar(*flag[4]);
    return len;
}

int treat_width(int width, int len, char c)
{
    int print_len = 0;

    for (int i = 0; len + i < width; i++) {
        print_len += my_putchar(c);
    }
    return print_len;
}

int fill_front(int format, char *nb, char add, int width)
{
    int print_len = 0;
    int len = my_strlen(nb) + 1;

    if (nb[0] != '-' && add != 0 && format != 0)
        print_len += my_putchar(add);
    if (format == 0) {
        print_len += treat_width(width, len + print_len, ' ');
        if (add != 0)
            print_len += my_putchar(add);
    }
    if (format == 2 && nb[0] == '-') {
        my_putchar('-');
        print_len += treat_width(width, len + print_len, '0');
    } else if (format == 2)
        print_len += treat_width(width, len + print_len , '0');
    return print_len;
}

int ptr_print_fill_front(int format, int len, char add, int width)
{
    int print_len = 0;

    if (add != 0 && format != 0)
        print_len += my_putchar(add) + my_putstr("0x");
    if (format == 0) {
        print_len += treat_width(width, len + print_len, ' ');
        if (add != 0)
            print_len += my_putchar(add);
        print_len += my_putstr("0x");
    }
    if (format != 3 && format == 2) {
        print_len += my_putchar(add) + my_putstr("0x");
        print_len += treat_width(width, len + print_len , '0');
    }
    return print_len;
}
