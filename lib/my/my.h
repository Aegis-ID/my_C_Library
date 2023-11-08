/*
** EPITECH PROJECT, 2023
** my h
** File description:
** task02
*/

#ifndef PROTEC
    #define PROTEC
    #include <stdarg.h>

int my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
//my_printf_functions
int units_len(double nb);
double my_decimal(double nb);
int by10(int power);
char *convert_base(long unsigned int n, int b, int precision);
char *convert(long unsigned int n, int b, int len);
char *scientific(double nbr, int precision);
char *my_put_float(double nb, int precision);
void convert_units_str(double nb);
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
int l_print_char(va_list ap, int len, char **flag);
int l_print_str(va_list ap, int len, char **flag);
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
int mini_printf(char const *format, ...);
int my_printf(char const *format, ...);
#endif
