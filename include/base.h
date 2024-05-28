/*
** EPITECH PROJECT, 2023
** my h
** File description:
** task02
*/

#ifndef __BASE__
    #define __BASE__
    #include <unistd.h>

ssize_t my_putchar(char c);

int my_isneg(int nb);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
int my_pow(int nb, int power);

double my_sqrt(double nb);

char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strndup(const char *str, const size_t n);

void my_swap(int *a, int *b);
void my_sort_int_array(int *tab, int size);
void mini_printf(char const *format, ...);

#endif
