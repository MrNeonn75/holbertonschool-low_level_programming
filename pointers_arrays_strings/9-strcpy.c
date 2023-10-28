#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 * @dest: Variable
 * @src: String
 *
 * Return: The value of pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
