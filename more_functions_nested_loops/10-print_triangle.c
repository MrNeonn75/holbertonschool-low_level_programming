/*
 * File: 10-print_triangle.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: the size of the triangle.
 *
 * Return: Nothing
 */

void print_triangle(int size)
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
if (x < size - 1 - i)
{
_putchar(32);
}
else
{
_putchar(35);
if (x == size - 1)
{
_putchar(10);
}

}

}
}

}

}
