/*
 * File: 5-rev_string.c
 * Author: 7727@holbertonschool.com
 */

#include <string.h>
#include "main.h"

/**
 * print_rev - A function that prints the string.
 * @s: String.
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
int len = (int)strlen(s);
int i;

for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}

}

