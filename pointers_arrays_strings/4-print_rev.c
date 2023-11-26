/*
 * File: 4-print_rev.c
 * Author: 7727@holbertonschool.com
 */

#include <string.h>
#include "main.h"

/**
 * print_rev - A function that prints the string, followed by new line.
 * @s: String.
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
int len = (int)strlen(s);
int i;

for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar(10);

}

