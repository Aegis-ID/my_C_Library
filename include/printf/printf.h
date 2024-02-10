/*
** EPITECH PROJECT, 2023
** printf
** File description:
** functions prototypes for printf
*/

#ifndef __MY_PRINTF__
    #define __MY_PRINTF__
    #include <stdarg.h>
    #include <stdlib.h>
    #include <wchar.h>
    #include <unistd.h>
//my_printf_functions
int units_len(double nb);
int by10(int power);
char *convert_base(long unsigned int n, int b, int precision);
char *convert(long unsigned int n, int b, int len);
char *scientific(double nbr, int precision);
char *my_put_float(double nb, int precision);
char *ld_to_s(long long int nbr, int precision);
int my_intlen(long long int nb);
int treat_width(int width, int len, char c);
int treat_flag(char **flag, va_list ap, int len);
void get_other_flag(char *flag, int *format, char *add);
int fill_front(int format, char *nb, char add, int width);
int ptr_print_fill_front(int format, int len, char add, int width);
int print_g_scientific(double nb, int len, char **flag, int precision);
int print_g_float(double nb, int len, char **flag, int precision);
int print_flag(char **flag);
char *get_full_flag(char const *format);
char **extract_modifier(char *flag, int len);
char *nbr_in_str_arr(char *flag, int len, char **mod_arr);
void free_flag_str(char **flag, char *str);
//my_printf flags:
int print_char(va_list ap, int len, char **flag);
int print_str(va_list ap, int len, char **flag);
int print_nbr(va_list ap, int len, char **flag);
int register_len(va_list ap, int len, char **flag);
int convert_o(va_list ap, int len, char **flag);
int convert_x(va_list ap, int len, char **flag);
int convert_x_upcase(va_list ap, int len, char **flag);
int convert_u(va_list ap, int len, char **flag);
int print_ptr(va_list ap, int len, char **flag);
int print_scientific(va_list ap, int len, char **flag);
int print_float(va_list ap, int len, char **flag);
int print_g(va_list ap, int len, char **flag);
int print_errno(va_list ap, int len, char **flag);
//my_printf functions (other cases):
int l_print_nbr(va_list ap, int len, char **flag);
int l_register_len(va_list ap, int len, char **flag);
int l_convert_o(va_list ap, int len, char **flag);
int l_convert_x(va_list ap, int len, char **flag);
int l_convert_x_upcase(va_list ap, int len, char **flag);
int l_convert_u(va_list ap, int len, char **flag);
int ll_print_nbr(va_list ap, int len, char **flag);
int ll_register_len(va_list ap, int len, char **flag);
int ll_convert_o(va_list ap, int len, char **flag);
int ll_convert_x(va_list ap, int len, char **flag);
int ll_convert_x_upcase(va_list ap, int len, char **flag);
int ll_convert_u(va_list ap, int len, char **flag);
int h_print_nbr(va_list ap, int len, char **flag);
int h_register_len(va_list ap, int len, char **flag);
int h_convert_o(va_list ap, int len, char **flag);
int h_convert_x(va_list ap, int len, char **flag);
int h_convert_x_upcase(va_list ap, int len, char **flag);
int h_convert_u(va_list ap, int len, char **flag);
int hh_print_nbr(va_list ap, int len, char **flag);
int hh_register_len(va_list ap, int len, char **flag);
int hh_convert_o(va_list ap, int len, char **flag);
int hh_convert_x(va_list ap, int len, char **flag);
int hh_convert_x_upcase(va_list ap, int len, char **flag);
int hh_convert_u(va_list ap, int len, char **flag);
//Final my_printf function:
int my_printf(char const *format, ...);
#endif /* !__MY_PRINTF__ */
