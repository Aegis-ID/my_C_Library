/*
** EPITECH PROJECT, 2023
** conversion_base
** File description:
** convert a number to any base
*/

#include <stdlib.h>
#include "include/my.h"

char *convert(long unsigned int n, int b, int len)
{
    char *r = malloc(sizeof(char) * (len + 1));
    int t = 0;
    int i = 0;

    while (n) {
        t = n % b;
        n /= b;
        if (t < 10)
            r[len - i - 1] = t + 48;
        else
            r[len - i - 1] = t + 87;
        i++;
    }
    for (int j = i; j < len; j++)
        r[j] = '0';
    r[len] = '\0';
    return r;
}

char *convert_base(long unsigned int n, int b, int precision)
{
    int len = 1;
    long unsigned int p = 1;
    char *r;
    int intstr = 0;
    char *zero = malloc(sizeof(char) * (precision + 1));

    while (n >= p * b) {
        len += 1;
        p *= b;
    }
    r = convert(n, b, len);
    intstr = my_strlen(r);
    for (int i = 0; i < precision - intstr; i++)
        zero[i] = '0';
    return my_strcat(zero, r);
}
