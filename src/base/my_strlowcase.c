/*
** EPITECH PROJECT, 2023
** day03-06
** File description:
** some return0 functions
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A') && (str[i] <= 'Z'))
            str[i] += 32;
    }
    return str;
}
