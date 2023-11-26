/*
 * File: 5-sign.c
 * Author: 7727@holbertonschool.com
 */

#include <ctype.h>
#include "main.h"

/**
 * print_sign - A function that prints the sign of a number.
 * @c: The character to be checked.
 *
 * Return: 1 if the number is greater than 0,
 *  0 - if number equal to 0, -1 otherwise.
 */
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}

}
