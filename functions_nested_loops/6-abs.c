/*
 * File: 5-sign.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * print_sign - A function that prints the sign of a number.
 * @c: The character to be checked.
 *
 * Return: 1 if the number is greater than 0,
 *  0 - if number equal to 0, -1 otherwise.
 */

int _abs(int x)
{
if (x < 0)
{
return (x * -1);
}
else
{
return (x);
}

}
