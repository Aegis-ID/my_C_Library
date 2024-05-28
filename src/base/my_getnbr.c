/*
** EPITECH PROJECT, 2023
** my get nbr
** File description:
** don't forget the is_strdigit before...
** if its the number of a string u want ofc
** it would be nice for the ascii sum tho without positivity
*/

#include <stddef.h>

int my_getnbr(char const *str)
{
    size_t positivity = 0;
    int nbr = 0;

    for (size_t i = 0; str[i]; ++i)
        nbr = nbr * 10 + (str[i] - 48);
    for (size_t i = 0; str[i] == '-'; ++i)
        if (str[i] == '-')
            positivity += 1;
    positivity %= 2;
    if (positivity > 0)
        return -nbr;
    return nbr;
}
