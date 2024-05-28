/*
** EPITECH PROJECT, 2023
** display stdargs
** File description:
** part C
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void digit_cases(FILE *fp, const char *format, va_list lptr, int k)
{
    int i = 0;
    double d = 0;

    switch (format[k]) {
    case 'i':
        i = (va_arg(lptr, int));
        fwrite(&i, sizeof(int), 1, fp);
        break;
    case 'd':
        d = (va_arg(lptr, int));
        fwrite(&d, sizeof(double), 1, fp);
        break;
    }
}

static void char_cases(FILE *fp, const char *format, va_list lptr, int k)
{
    char c = 0;
    char *s = NULL;

    switch (format[k]) {
    case 'c':
        c = (char) va_arg(lptr, int);
        fwrite(&c, sizeof(char), 1, fp);
        break;
    case 's':
        s = (va_arg(lptr, char *));
        fwrite(s, sizeof(char), strlen(s), fp);
        break;
    case '%':
        fwrite("%", sizeof(char), 1, fp);
        break;
    }
}

void mini_fprintf(FILE *fp, char const *format, ...)
{
    va_list lptr;
    int k = 0;

    va_start(lptr, format);
    for (k = 0; format[k] != '\0'; k++) {
        if (format[k] == '%') {
            k++;
            digit_cases(fp, format, lptr, k);
            char_cases(fp, format, lptr, k);
            va_end(lptr);
        } else {
            fwrite(&format[k], sizeof(char), 1, fp);
        }
    }
}
