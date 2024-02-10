/*
** EPITECH PROJECT, 2023
** int to str
** File description:
** for my hunter print font
*/

static void positivity(int number, char *buffer, int buffer_size)
{
    int i = 0;
    int start = 0;
    int end;
    char temp;

    while (number > 0 && i < buffer_size - 1) {
        buffer[i] = '0' + number % 10;
        ++i;
        number /= 10;
    }
    buffer[i] = '\0';
    end = i - 1;
    while (start < end) {
        temp = buffer[start];
        buffer[start] = buffer[end];
        buffer[end] = temp;
        ++start;
        --end;
    }
}

void int_to_str(int number, char *buffer, int buffer_size)
{
    int i = 0;

    if (buffer_size <= 0) {
        buffer[0] = '\0';
        return;
    }
    if (number < 0 && i < buffer_size - 1) {
        buffer[i] = '-';
        ++i;
        number = -number;
    }
    positivity(number, buffer + i, buffer_size - i);
}
