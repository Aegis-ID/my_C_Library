/*
** EPITECH PROJECT, 2024
** my_intlen
** File description:
** new func
*/

#include <stddef.h>

size_t intlen(int nb)
{
    size_t size = 0;

    if (nb < 0)
        nb *= -1;
    while (nb >= 1) {
        nb /= 10;
        size += 1;
    }
    return size;
}
