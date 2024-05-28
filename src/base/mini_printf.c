/*
** EPITECH PROJECT, 2023
** display stdargs
** File description:
** part C
*/

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

static size_t m_strlen(const char *str)
{
    size_t size = 0;

    while (str[size] != '\0')
        size += 1;
    return size;
}

static int my_put_int(int nb)
{
    unsigned short digit = 0;
	char tmp = 0;

    if (nb < 0) {
        write(1, "-", 1);
        nb = nb * (-1);
    }
    if (nb >= 0 && nb <= 9) {
		tmp = nb + 48;
        write(1, &tmp, 1);
    } else {
        digit = (nb % 10);
        nb /= 10;
        my_put_int(nb);
		tmp = digit + 48;
        write(1, &tmp, 1);
    }
    return nb;
}

static void digit_cases(const char *format, va_list lptr, int k)
{
    int i = 0;
    double d = 0;

    switch (format[k]) {
    case 'i':
        i = (va_arg(lptr, int));
        my_put_int(i);
        break;
    case 'd':
        d = (va_arg(lptr, int));
        my_put_int(d);
        break;
    }
}

static void char_cases(const char *format, va_list lptr, int k)
{
    char c = 0;
    char *s = NULL;

    switch (format[k]) {
    case 'c':
        c = (char) va_arg(lptr, int);
        write(1, &c, 1);
        break;
    case 's':
        s = (va_arg(lptr, char *));
        write(1, s, m_strlen(s));
        break;
    case '%':
        write(1, "%", 1);
        break;
    }
}

void mini_printf(char const *format, ...)
{
    va_list lptr;
    int k = 0;

    va_start(lptr, format);
    for (k = 0; format[k] != '\0'; k++) {
        if (format[k] == '%') {
            k++;
            digit_cases(format, lptr, k);
            char_cases(format, lptr, k);
            va_end(lptr);
        } else {
            write(1, &format[k], 1);
        }
    }
}
