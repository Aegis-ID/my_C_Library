/*
** EPITECH PROJECT, 2024
** myradar
** File description:
** mylib
*/

#ifndef __NEW__
    #define __NEW__

    #include <stddef.h>
    #include <stdbool.h>
    #include <stdint.h>
    #include <fcntl.h>
    #include <stdio.h>

bool are_in_str(const char *c, const char *str);
bool check_extension(const char *filepath, const char *ext);
bool is_alpha(const char c);
bool is_array_empty(const char **array);
bool is_digit(const char c);
bool is_in_str(const char c, const char *str);
bool is_strfloat(const char *str);
bool is_str_in_ascii(const char *str);
bool is_str_in_range(const char *str,
    const uint8_t ascii_start, const uint8_t ascii_end);
bool is_strdigit(const char *str);

int hex_to_int(const char *hex);

size_t array_strlen(const char **array);
size_t arraylen(const char **array);
size_t count_char_in_str(const char *str, const char c);
size_t get_index_in_array(const char *str, const char **array);
size_t intlen(int nb);
size_t strlen_delim(const char *str, const char delim);

off_t get_size(const char *filepath);

char *array_to_str(const char **array, const char delim);
char *clean_str(char *str, const char clean);
char *file_to_str(const char *filepath);

const char *get_str_in_array(char **array, char *str);
const char *get_nstr_in_array(const char **array, const char *str);

char **str_to_word_array(const char *str, const char *delim);

void free_array(char **str);
void mini_dprintf(int fd, char const *format, ...);
void mini_fprintf(FILE *fp, char const *format, ...);

#endif /* !__NEW__ */
