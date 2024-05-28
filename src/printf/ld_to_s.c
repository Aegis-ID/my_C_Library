/*
** EPITECH PROJECT, 2023
** ld_to_s
** File description:
** put long int in str
*/

#include <stdlib.h>
#include "printf/printf.h"
#include "base.h"

char *check_len(long long int nbr, long long int digit, char *str, int len)
{
    if (digit)
        str[len] = nbr + 48;
    else
        str[len] = '8';
    return str;
}

char *put_lint_in_arr(long long int nbr, int len, int neg, long long int digit)
{
    char *str = malloc(sizeof(char) * (len + 1));

    if (neg) {
        for (int i = 0; i < len - 1; i++) {
            str[i] = nbr / digit + 48;
            nbr -= nbr / digit * digit;
            digit /= 10;
        }
        str = check_len(nbr, digit, str, len - 1);
    } else {
        for (int i = 0; i < len; i++) {
            str[i] = nbr / digit + 48;
            nbr -= nbr / digit * digit;
            digit /= 10;
        }
    }
    str[len] = '\0';
    return str;
}

char *put_zero(long long int neg, int len, int precision)
{
    char *str;
    int i = 0;

    if (precision > len)
        str = malloc(sizeof(char) * (precision + 2));
    else
        str = malloc(sizeof(char) * (len + 2));
    if (neg) {
        str[i] = '-';
        i++;
    }
    for (; len + i < precision; i++)
        str[i] = '0';
    str[i] = '\0';
    return str;
}

char *freed_return(char *res, char *zero)
{
    char *r;

    r = my_strcat(zero, res);
    free(res);
    return r;
}

char *ld_to_s(long long int nbr, int precision)
{
    int neg = 0;
    long long int digit = 1;
    int len = 1;

    if (nbr < 0) {
        neg = 1;
        if (nbr % 10 == -8) {
            nbr = nbr / 10;
            len++;
        }
        nbr = -nbr;
    }
    while (digit <= nbr / 10) {
        digit *= 10;
        len++;
    }
    return freed_return(put_lint_in_arr(nbr, len, neg, digit),
                        put_zero(neg, len, precision));
}
