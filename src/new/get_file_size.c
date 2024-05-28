/*
** EPITECH PROJECT, 2024
** get_file_size
** File description:
** new
*/

#include <sys/stat.h>
#include <fcntl.h>

off_t get_size(const char *filepath)
{
    struct stat st;

    if (stat(filepath, &st) == -1)
        return -1;
    return st.st_size;
}
