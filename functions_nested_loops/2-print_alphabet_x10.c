/*
 * File: 2-print_alphabet_x10.c
 * Author: 7727@holbertonschool.com
 */

#include <string.h>
#include "main.h"


/**
 * print_alphabet_x10 - Prints 10 tmies alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int len = strlen(alphabet);
int i;
int time;

for (time = 0; time < 10; time++)
{

for (i = 0; i < len; i++)
{
_putchar(alphabet[i]);
}
_putchar(10);

}

}

