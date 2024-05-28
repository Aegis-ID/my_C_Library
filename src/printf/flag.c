/*
** EPITECH PROJECT, 2023
** flag
** File description:
** treat flag
*/
#include <stdlib.h>
#include "printf/printf.h"
#include "printf/func_ptr.h"
#include "base.h"

int get_tag_flag(char *flag, int *h_tag)
{
    int temp = 0;

    while (*flag) {
        temp = FLAGS[(int) *flag];
        flag++;
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
        temp = FLAGS[(int) *flag];
        flag++;
        if ((temp == 2 || temp == 3) && *format < temp)
            *format = temp;
        if ((temp == ' ' || temp == '+') && *add < temp)
            *add = temp;
    }
}

char *get_full_flag(char const *format)
{
    char const *begin = format;
    int flag_len = 2;
    char *flag;

    format++;
    while (*format && PRINT_ARR[(int) *format] == 0 && *format != '%') {
        format++;
        flag_len++;
    }
    if (*format == '\0')
        return (char *) begin;
    flag = malloc(sizeof(char) * (flag_len + 1));
    for (int i = 0; i < flag_len; i++) {
        flag[i] = *begin;
        begin++;
    }
    flag[flag_len] = '\0';
    return flag;
}

char **extract_modifier(char *flag, int len)
{
    char **mod_arr = malloc(sizeof(char *) * 5);
    char *mod = malloc(sizeof(char) * len);
    int i;

    for (i = 0; flag[i] && FLAGS[(int) flag[i]] != 0; i++)
        mod[i] = flag[i];
    flag += i;
    mod[i] = '\0';
    mod_arr[0] = mod;
    flag = nbr_in_str_arr(flag, len, mod_arr);
    mod = malloc(sizeof(char) * 3);
    for (i = 0; i < 2 &&
        (PRINT_ARR[(int) flag[i]] == 0 && flag[i] != '%'); i++)
        mod[i] = flag[i];
    flag += i;
    mod[i] = '\0';
    mod_arr[3] = mod;
    mod_arr[4] = flag;
    return mod_arr;
}

int treat_flag(char **flag, va_list ap, int len)
{
    int h_tag = 0;
    int length = 0;

    if (*flag[4] == '%')
        return len + my_putchar('%');
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
