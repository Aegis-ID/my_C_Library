/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** Positive or negative
*/

#include <unistd.h>

int my_isneg(int nb)
{
    if (nb < 0) {
        write(1, "N", 1);
    } else {
        write(1, "P", 1);
    }
    write(1, "\n", 1);
    return 0;
}
