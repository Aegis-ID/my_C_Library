/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** Put numbers
*/

#include <unistd.h>

int my_put_nbr(int nb)
{
    unsigned int digit = 0;
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
        my_put_nbr(nb);
        tmp = digit + 48;
        write(1, &tmp, 1);
    }
    return nb;
}
