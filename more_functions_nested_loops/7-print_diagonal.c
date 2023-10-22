/*
 * File: 7-print_diagonal.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * print_line - A function that draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 *
 * Return: Nothing
 */

void print_diagonal(int n)
{
int i;
int x;

if (n == 0)
{
_putchar(10);
}
for (x = 0; x <= n; x++)
{
for (i = 0; i <= x; i++)
{
if (i == x && n != 0)
{
_putchar(92);
_putchar(10);
}
else
{
_putchar(32);
}

}
}

}
