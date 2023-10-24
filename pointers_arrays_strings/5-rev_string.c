/*
 * File: 5-rev_string.c
 * Author: 7727@holbertonschool.com
 */

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - A function that prints the string.
 * @s: String.
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
int len = (int)strlen(s);
int i;

for (i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}

}

