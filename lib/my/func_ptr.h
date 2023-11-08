/*
** EPITECH PROJECT, 2023
** func_ptr
** File description:
** associative array of function's pointers
*/

#ifndef ARRAY_FUNC
    #define ARRAY_FUNC
    #include "my.h"

typedef int (*print)(va_list, int, char **);

const print PRINT_ARR[256] = {['c'] = print_char, ['d'] = print_nbr,
    ['i'] = print_nbr, ['s'] = print_str, ['n'] = register_len,
    ['o'] = convert_o, ['x'] = convert_x, ['X'] = convert_x_upcase,
    ['u'] = convert_u, ['p'] = print_ptr, ['e'] = print_scientific,
    ['f'] = print_float, ['g'] = print_g, ['m'] = print_errno};

const print l_PRINT_ARR[256] = {['c'] = print_char, ['d'] = l_print_nbr,
    ['i'] = l_print_nbr, ['s'] = print_str, ['n'] = l_register_len,
    ['o'] = l_convert_o, ['x'] = l_convert_x, ['X'] = l_convert_x_upcase,
    ['u'] = l_convert_u, ['e'] = print_scientific,
    ['f'] = print_float, ['g'] = print_g};

const print ll_PRINT_ARR[256] = {['d'] = ll_print_nbr, ['i'] = ll_print_nbr,
    ['n'] = ll_register_len, ['o'] = ll_convert_o, ['x'] = ll_convert_x,
    ['X'] = ll_convert_x_upcase};

const print h_PRINT_ARR[256] = {['d'] = h_print_nbr, ['i'] = h_print_nbr,
    ['n'] = h_register_len, ['o'] = h_convert_o,
    ['x'] = h_convert_x, ['X'] = h_convert_x_upcase};

const print hh_PRINT_ARR[256] = {['d'] = hh_print_nbr, ['i'] = hh_print_nbr,
    ['n'] = hh_register_len, ['o'] = hh_convert_o, ['x'] = hh_convert_x,
    ['X'] = hh_convert_x_upcase};

const int FLAGS[256] = {['#'] = 1, ['0'] = 2, ['-'] = 3,
    [' '] = ' ', ['+'] = '+'};

const print *ARR_PRINT_ARR[256] = {[0] = PRINT_ARR, ['l'] = l_PRINT_ARR,
    ['l' + 'l'] = ll_PRINT_ARR, ['h'] = h_PRINT_ARR,
    ['h' + 'h'] = hh_PRINT_ARR};

#endif
