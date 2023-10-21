/*
 * File: 8-24_hours.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * print_last_digit - A function that prints the 9 times table,
 *  starting with 0.
 * @x: The character to be checked.
 *
 * Return: Nothing.
 */

void jack_bauer()
{
int hour;
int minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}

}
