/*
 * File: 1-alphabet.c
 * Author: 7727@holbertonschool.com
 */

#include <string.h>
#include "main.h"


/**
 * print_alphabet - Prints alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int len = strlen(alphabet);
int i;

for (i = 0; i < len; i++)
{
_putchar(alphabet[i]);
}
_putchar(10);
}

