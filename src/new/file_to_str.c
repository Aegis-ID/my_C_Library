/*
** EPITECH PROJECT, 2024
** file to array
** File description:
** new_funcs
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "base.h"
#include "new.h"

char *file_to_str(const char *filepath)
{
    int fd = 0;
    off_t file_size = get_size(filepath);
    size_t size = 0;
    char *buffer = NULL;

    if (file_size == -1)
        return NULL;
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return NULL;
    buffer = (char *) malloc(sizeof(char) * (file_size + 1));
    if (buffer == NULL)
        return NULL;
    size = read(fd, buffer, (file_size - 1));
    buffer[size] = '\0';
    close(fd);
    return buffer;
}
