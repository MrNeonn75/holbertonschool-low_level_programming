/*
 * File: 8-print_square.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * print_square - A function that prints a square, followed by a new line.
 * @size: the size of the square
 *
 * Return: Nothing
 */

void print_square(int size)
{
int i;
int x;

if (size <= 0)
{
_putchar(10);
}
else
{
for (i = 0; i <= size - 1; i++)
{
for (x = 0; x <= size - 1; x++)
{
_putchar(35);
}
_putchar(10);
}
}

}
