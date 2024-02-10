/*
** EPITECH PROJECT, 2024
** myradar
** File description:
** mylib
*/

#ifndef __MY_LIB__
    #define __MY_LIB__

long get_size(const char *filename);
int my_readfile(char *filepath);
int my_strcmp(char const *s1, char const *s2);

//map_analyser.c
int map_row(char **map);
char *file_content(char *filepath);
char **buffer_to_map(char *buffer);
void free_map(char **map);

#endif /* !__MY_LIB__ */
