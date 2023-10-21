/*
 * File: 7-print_last_digit.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * print_last_digit - A function that computes the absolute value of an integer.
 * 
 * @x: The character to be checked.
 *
 * Return: Absolute value of an integer.
 */

int print_last_digit(int x)
{
int last_digit = x % 10;

if (last_digit < 0)
    last_digit *= -1;

_putchar(last_digit + '0');

return (last_digit);

}
