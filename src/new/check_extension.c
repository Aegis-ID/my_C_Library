/*
** EPITECH PROJECT, 2024
** check_extensions
** File description:
** new
*/

#include <stdbool.h>
#include "base.h"
#include "new.h"

bool check_extension(const char *filepath, const char *ext)
{
    char **parsed_file = str_to_word_array(filepath, ".");
    size_t size = 0;
    bool status = false;

    if (parsed_file == NULL)
        return false;
    size = arraylen((const char **)parsed_file);
    if (my_strcmp(parsed_file[size], ext) == 0)
        status = true;
    free_array(parsed_file);
    return status;
}
