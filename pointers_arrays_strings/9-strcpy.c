/*
 * File: 9-strcpy.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 * @dest: Variable
 * @str: String
 *
 * Return: The value of pointer dest
 */

char *_strcpy(char *dest, const char *src)
{
	char *memory = dest;
	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}
	*dest = '\0';
	return (memory);
}