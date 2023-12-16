#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

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
    char *return_variable;

    str = malloc(letters * sizeof(char));

    if (str == NULL)
    {
        return (0);
    }
    
    if (ptr == NULL)
    {
        return (0);
    }

    fread(&str, sizeof(char), letters, ptr);

    sprintf(return_variable, "%s\n(printed chars: %ld)", str, letters);

    write(1, &return_variable, strlen(return_variable));

    fclose(ptr);

    return (strlen(return_variable));

}
