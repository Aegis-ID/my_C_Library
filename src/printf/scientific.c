/*
** EPITECH PROJECT, 2023
** scientific
** File description:
** scientific conversion
*/

#include <stdlib.h>
#include "printf/printf.h"
#include "base.h"

void add_power(char *res, int pwr, int precision)
{
    int digit;

    res[precision + 2] = 'e';
    if (pwr > 0)
        res[precision + 3] = '+';
    else {
        res[precision + 3] = '-';
        pwr = -pwr;
    }
    for (int i = 0; i < 2; i++) {
        digit = my_pow(10, 1 - i);
        res[i + precision + 4] = (pwr / digit + 48);
        pwr -= pwr / digit * digit;
    }
    res[precision + 6] = '\0';
}

double get_first_digit(double nbr, int *pwr, int precision)
{
    double get_max_digit = 1;
    double last_digit = 1;

    while (nbr < 0) {
        *pwr -= 1;
        nbr *= 10;
    }
    while (nbr >= 10) {
        *pwr += 1;
        nbr /= 10;
    }
    for (int i = 0; i < precision; i++)
        last_digit *= 10;
    nbr += nbr / last_digit / 2;
    return nbr / get_max_digit * last_digit;
}

void db_to_str(double nbr, char *res, int len, int precision)
{
    double get_max_digit = 1;

    for (int i = 0; i < precision; i++)
        get_max_digit *= 10;
    res[len] = (int) (nbr / get_max_digit) + 48;
    nbr -= (int) (nbr / get_max_digit) * get_max_digit;
    res[len + 1] = '.';
    for (int i = len + 2; i < len + precision + 2; i++) {
        get_max_digit /= 10;
        res[i] = (int) (nbr / get_max_digit) + 48;
        nbr -= (int) (nbr / get_max_digit) * get_max_digit;
    }
}

char *error(double nbr, int precision)
{
    if (nbr / 10 == nbr && nbr > 0)
        return "inf";
    else if (nbr / 10 == nbr && nbr < 0)
        return "-inf";
    if ((nbr > 1.0 || nbr <= 1.0) == 0)
        return "-nan";
    return malloc(sizeof(char) * (precision + 6));
}

char *scientific(double nbr, int precision)
{
    char *res = error(nbr, precision);
    int len = 0;
    int pwr = 0;

    if (*res)
        return res;
    if (nbr < 0) {
        len++;
        nbr = -nbr;
        res[0] = '-';
    }
    nbr = get_first_digit(nbr, &pwr, precision);
    db_to_str(nbr, res, len, precision);
    add_power(res, pwr, precision);
    return res;
}
