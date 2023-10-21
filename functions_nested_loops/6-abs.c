/*
 * File: 6-abs.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * _abs - A function that computes the absolute value of an integer.
 * 
 * @x: The character to be checked.
 *
 * Return: Absolute value of an integer.
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
