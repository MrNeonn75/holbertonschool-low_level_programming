/*
 * File: 3-islower.c
 * Author: 7727@holbertonschool.com
 */

#include <ctype.h>
#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(char c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}

}
