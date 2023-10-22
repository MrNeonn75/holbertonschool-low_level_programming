/*
 * File: 1-isdigit.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * _isupper - A function that checks  a digit (0 through 9).
 * @c: Choosen character (ASCII)
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}

}
