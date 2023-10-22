/*
 * File: 3-print_numbers.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers, from 0 to 9,
 *  followed by a new line, without 2 and 4.
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i != 50 && i != 52)
{
_putchar(i);
}
}
_putchar(10);

}
