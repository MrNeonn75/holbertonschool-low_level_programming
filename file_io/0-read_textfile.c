#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

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
    FILE *ptr =fopen(filename, "r");

    str = malloc(letters * sizeof(char));

    if (str == NULL)
    {
        return (0);
    }
    
    if (ptr == NULL)
    {
        return (0);
    }

    fread(&str, sizeof(char), letters + 22, ptr);

    write(1, &str, letters);

    fclose(ptr);

    return (letters);

}
