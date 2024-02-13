/*
** EPITECH PROJECT, 2024
** myradar
** File description:
** mylib
*/

#ifndef __MY_LIB__
    #define __MY_LIB__

int check_file_extension(const char *str, const char *ext);
int count_char_in_str(char *str, char c);
long get_size(const char *filename);
int my_readfile(char *filepath);
int my_strlen_delim(char *str, int start, char delim);
char **str_to_word_array(char *str, char delimiter);

#endif /* !__MY_LIB__ */
