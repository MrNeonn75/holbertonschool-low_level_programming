#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * sum_them_all -  sums all arguments variadic
 * @n: Number of Arguments
 * @...: Arguments Variadic
 *
 * Return: sum of its parameters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *str;
    int ptr, size, i;

    ptr = open(filename, O_RDONLY);

    str = malloc(letters * sizeof(char));

    if (str == NULL)
    {
        return (0);
    }
    
    if (ptr < 0)
    {
        return (0);
    }

    size = read(ptr, str, letters);

    for(i = 0; i < size; i++){
        _putchar(str[i]);
    }
    _putchar(10);

    write(1, &str, letters);

    close(ptr);

    return (size + 1);

}
