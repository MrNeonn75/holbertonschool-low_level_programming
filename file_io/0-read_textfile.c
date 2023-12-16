#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

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


    if (ptr == NULL)
    {
        return (0);
    }

    if(fgets(str, letters, ptr) != NULL) 
    {
        write(1, &str, letters);
    }
    else
    {
        return (0);
    }

    fclose(ptr);

    return (letters);

}
