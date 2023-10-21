/*
 * File: 4-isalpha.c
 * Author: 7727@holbertonschool.com
 */

#include <ctype.h>
#include "main.h"

/**
 * _islower - Checks if a character is letter.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is letter, 0 otherwise.
 */
int _isalpha(char c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}

}
