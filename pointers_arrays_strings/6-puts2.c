/*
 * File: 6-puts2.c
 * Author: 7727@holbertonschool.com
 */

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - A function that prints the string,
 *  starting with the first character,
 *  followed by a new line.
 * @str: String.
 *
 * Return: Nothing
 */

void puts2(char *str)
{
int len = (int)strlen(str);
int i;

for (i = 0; i < len; i++)
{
if (i % 2 == 0)
{
putchar(str[i]);
}
}
putchar(10);

}
