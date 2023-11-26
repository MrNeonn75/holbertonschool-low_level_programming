/*
 * File: 3-print_numbers.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * print_numbers - A function that prints the numbers, from 0 to 9,
 *  followed by a new line.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */

void print_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
_putchar(i);
}
_putchar(10);

}
