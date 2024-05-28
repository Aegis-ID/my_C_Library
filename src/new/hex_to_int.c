/*
** EPITECH PROJECT, 2024
** hex to int
** File description:
** bs corewar
*/

#include <stddef.h>

int hex_to_int(const char *hex)
{
    int nb = 0;
    size_t size = sizeof(int);

    for (size_t x = 0; x < size; ++x)
        nb += (unsigned char)hex[x] << (8 * x);
    return nb;
}
