/*
 * File: 2-strlen.c
 * Author: 7727@holbertonschool.com
 */

#include <string.h>
#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: String.
 *
 * Return: The length of a string.
 */

int _strlen(char *s)
{
size_t len = strlen(s);

int size = (int)len;

return (size);

}

