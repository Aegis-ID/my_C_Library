/*
** EPITECH PROJECT, 2023
** flag
** File description:
** treat flag
*/
#include <stdlib.h>
#include "include/my.h"
#include "include/func_ptr.h"

int get_tag_flag(char *flag, int *h_tag)
{
    int temp;

    while (*flag) {
        temp = FLAGS[(int) *flag++];
        if (temp == 1)
            *h_tag = 1;
        if (temp == 0)
            return 84;
    }
    return 0;
}

void get_other_flag(char *flag, int *format, char *add)
{
    int temp;

    while (*flag) {
        temp = FLAGS[(int) *flag++];
        if ((temp == 2 || temp == 3) && *format < temp)
            *format = temp;
        if ((temp == ' ' || temp == '+') && *add < temp)
            *add = temp;
    }
}

char *get_full_flag(char const *format)
{
    char *begin = (char *) format;
    int flag_len = 1;
    char *flag;

    while (*format && PRINT_ARR[(int) *format] == 0) {
        format++;
        flag_len++;
    }
    if (*format == '\0')
        return begin;
    flag = malloc(sizeof(char) * (flag_len + 1));
    for (int i = 0; i < flag_len; i++) {
        flag[i] = *begin++;
    }
    flag[flag_len] = '\0';
    return flag;
}

char **extract_modifier(char *flag, int len)
{
    char **mod_arr = malloc(sizeof(char *) * 6);
    char *mod = malloc(sizeof(char) * len);

    for (int i = 0; *flag && FLAGS[(int) *flag] != 0; i++) {
        mod[i] = *flag;
        flag++;
    }
    mod_arr[0] = mod;
    flag = nbr_in_str_arr(flag, len, mod_arr);
    mod = malloc(sizeof(char) * 3);
    for (int i = 0; *flag && PRINT_ARR[(int) *flag] == 0; i++) {
        mod[i] = *flag;
        flag++;
    }
    if (PRINT_ARR[(int) *flag] == 0)
        return 0;
    mod_arr[3] = mod;
    mod_arr[4] = flag;
    mod_arr[5] = 0;
    return mod_arr;
}

int treat_flag(char **flag, va_list ap, int len)
{
    int h_tag = 0;
    int length = 0;

    if (get_tag_flag(flag[0], &h_tag) == 84)
        return len + print_flag(flag);
    for (int i = 0; flag[3][i] != '\0'; i++)
        length += (int) flag[3][i];
    if (ARR_PRINT_ARR[length] != 0 &&
        ARR_PRINT_ARR[length][(int) *flag[4]] != 0)
        return ARR_PRINT_ARR[length + h_tag][(int) *flag[4]](ap, len, flag);
    else
        return len + print_flag(flag);
}
