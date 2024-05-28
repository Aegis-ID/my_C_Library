/*
** EPITECH PROJECT, 2023
** intlen
** File description:
** get the length of an int
*/

int my_intlen(long long int nb)
{
    int len = 0;

    if (nb < 0) {
        nb *= -1;
        len++;
    }
    while (nb > 0) {
        len++;
        nb /= 10;
    }
    return len;
}
