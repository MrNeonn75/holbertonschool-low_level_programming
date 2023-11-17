#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *array;

    if (size > 0)
    {
        array = malloc(sizeof(char) * size);

        if (array == 0)
        {
            return (0);
        }

        for (i = 0; i <= size; i++)
        {
            *(array + i) = c;
        }

        *(array + 1) = '\0';

        return (array);
    }
    else
    {
        return (0);
    }
}
