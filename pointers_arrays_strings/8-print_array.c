/*
 * File: 8-print_array.c
 * Author: 7727@holbertonschool.com
 */

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - A function that prints n elements of an array of integers,
 *  followed by a new line.
 * @n: The number of elements of the array to be printed
 * @a: Array
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d\n", a[i]);
}

}
}
else
{
printf("\n");
}

}
