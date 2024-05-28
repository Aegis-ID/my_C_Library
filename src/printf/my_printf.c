/*
** EPITECH PROJECT, 2023
** miniprintf
** File description:
** miniprintf
*/

#include "base.h"
#include "printf/printf.h"

char *nbr_in_str_arr(char *flag, int len, char **mod_arr)
{
    char *mod = malloc(sizeof(char) * len);
    int i = 0;
    int j = 0;

    while (len && *flag <= '9' && *flag >= '0') {
        mod[i] = *flag;
        flag++;
        i++;
    }
    mod[i] = '\0';
    mod_arr[1] = mod;
    mod = malloc(sizeof(char) * len);
    while (*flag == '.' || (len && *flag <= '9' && *flag >= '0')) {
        mod[j] = *flag;
        j++;
        flag++;
    }
    mod[j] = '\0';
    mod_arr[2] = mod;
    return flag;
}

static int for_flag(va_list ap, char *flag, int len)
{
    char **mod = extract_modifier(flag, my_strlen(flag));

    if (mod == 0)
        return my_putchar('%') + my_putstr(flag);
    else
        return treat_flag(mod, ap, len);
}

int my_printf(char const *format, ...)
{
    va_list ap;
    int len = 0;
    char *flag;

    va_start(ap, format);
    while (*format) {
        if (*format != '%') {
            len += my_putchar(*format);
            format += 1;
        } else {
            flag = get_full_flag(format);
            format += my_strlen(flag);
            len += for_flag(ap, flag + 1, len);
            free(flag);
        }
    }
    va_end(ap);
    return len;
}
