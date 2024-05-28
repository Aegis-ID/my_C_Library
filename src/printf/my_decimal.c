/*
** EPITECH PROJECT, 2023
** f flag part 2
** File description:
** precision for f flag
*/

#include "printf/printf.h"
#include "base.h"

double take_decimal(double nb)
{
    int digit;
    int i = units_len(nb);

    nb /= my_pow(10, units_len(nb));
    while (i > 0) {
        nb *= 10;
        digit = nb;
        nb -= digit;
        i--;
    }
    return nb;
}
