/*
** EPITECH PROJECT, 2023
** function m
** File description:
** part 3, STAAAARDUST CRUSADER
*/

#include <stdarg.h>
#include <string.h>
#include <errno.h>
#include "printf/printf.h"
#include "base.h"

int print_errno(va_list ap, int len, char **flag)
{
    (void)ap;
    (void)flag;
    return len + my_putstr(strerror(errno));
}
