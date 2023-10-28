/*
 * File: 9-strcpy.c
 * Author: 7727@holbertonschool.com
 */

#include <string.h>
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

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
}