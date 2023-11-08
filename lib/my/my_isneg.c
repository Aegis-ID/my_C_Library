/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** Positive or negative
*/

#include "include/my.h"

int my_isneg(int nb)
{
    if (nb < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    my_putchar('\n');
    return 0;
}
