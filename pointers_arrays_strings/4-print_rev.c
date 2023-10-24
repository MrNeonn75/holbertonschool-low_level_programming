/*
 * File: 3-puts.c
 * Author: 7727@holbertonschool.com
 */

#include <string.h>
#include "main.h"

/**
 * _puts - A function that prints the string, followed by new line.
 * @str: String.
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
int len = (int)strlen(s);
int i;

for (i = len; i >= 0; i--)
{
_putchar(s[i]);
}


}

