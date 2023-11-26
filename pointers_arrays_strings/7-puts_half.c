/*
 * File: 7-puts_half.c
 * Author: 7727@holbertonschool.com
 */

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - A function that prints half of a string, followed by a new line.
 *  starting with the first character,
 *  followed by a new line.
 * @str: String.
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
int index = 0, len = 0, n;

while (str[index++])
len++;

if ((len % 2) == 0)
n = len / 2;

else
n = (len + 1) / 2;

for (index = n; index < len; index++)
_putchar(str[index]);

_putchar('\n');

}
