/*
 * File: 6-print_line.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed.
 *
 * Return: Nothing
 */

void print_line(int n)
{
if (n > 0)
{
for (; n > 0; n--)
{
_putchar(95);
}
}
_putchar(10);

}
