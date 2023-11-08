/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** Put numbers
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>

int by10(int power)
{
    return my_compute_power_rec(10, power);
}

char *put_decimal(char *str, double nb, int len, int precision)
{
    int digit;

    str[len] = '.';
    len++;
    if (nb == 0) {
        for (int i = 0; i < precision; i++)
            str[len + i] = '0';
        return str;
    }
    for (int i = 0; i < precision; i++) {
        nb *= 10;
        if (i == precision - 1)
            nb += 0.5;
        digit = (int) nb;
        str[len + i] = digit + 48;
        nb -= digit;
    }
    str[len + precision] = '\0';
    return str;
}

char *put_units(double nb, double checkpoint, int len, int precision)
{
    int first_digit;
    int units;
    char *str;

    while (checkpoint < nb / 10) {
        units++;
        checkpoint *= 10;
    }
    str = malloc(sizeof(char) * (units + precision + 2));
    if (len == 1)
        str[0] = '-';
    for (; checkpoint >= 1; checkpoint /= 10) {
        first_digit = nb / checkpoint;
        nb -= first_digit * checkpoint;
        str[len] = first_digit + 48;
        len++;
    }
    return put_decimal(str, nb, len, precision);
}

char *my_put_float(double nb, int precision)
{
    double checkpoint = 1;
    int len = 0;

    if (nb / 10 == nb && nb > 0)
        return "inf";
    else if (nb / 10 == nb && nb < 0)
        return "-inf";
    if ((nb > 1.0 || nb <= 1.0) == 0)
        return "-nan";
    if (nb < 0) {
        nb = -nb;
        len++;
    }
    return put_units(nb, checkpoint, len, precision);
}
