/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** some return0 functions
*/

#include <unistd.h>

ssize_t my_putchar(char c)
{
    return write(1, &c, 1);
}
