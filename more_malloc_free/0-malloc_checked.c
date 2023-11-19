#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked -  allocates memory using malloc.
* @b: size
*
* Return: Pointer to allocated memory or normal process termination
* with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
	void *variable;

	variable = malloc(b);

	if (variable == NULL)
		exit(98);

	return (variable);
}