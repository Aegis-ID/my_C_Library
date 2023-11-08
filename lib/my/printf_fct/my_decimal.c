/*
** EPITECH PROJECT, 2023
** f flag part 2
** File description:
** precision for f flag
*/

#include "include/my.h"

double my_decimal(double nb)
{
    int digit;
    int i = units_len(nb);

    nb /= my_compute_power_rec(10, units_len(nb));
    while (i > 0) {
        nb *= 10;
        digit = nb;
        nb -= digit;
        i--;
    }
    return nb;
}
