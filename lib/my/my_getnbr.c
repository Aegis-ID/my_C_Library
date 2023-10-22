/*
** EPITECH PROJECT, 2023
** my get nbr
** File description:
** added POSITIVITY
*/

int positivity(char const *str, int nbr)
{
    int negative = 0;

    for (int i = 0; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-') {
            negative++;
        }
    }
    negative = negative % 2;
    if (negative > 0) {
        nbr = nbr * (-1);
        return nbr;
    }
    return nbr;
}

int my_getnbr(char const *str)
{
    int nbr = 0;
    int char_nbr = 0;
    int max = 2147483647;
    char str2[11];

    for (int i = 0; str[i] >= '0' && str[i] <= '9' ||
        str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            str2[char_nbr] = str[i];
            char_nbr++;
        }
    }
    for (int x = 0; x < char_nbr && nbr <= max && nbr >= (max*(-1)); x++) {
        nbr = nbr * 10 + (str2[x] - 48);
    }
    positivity(str, nbr);
}
