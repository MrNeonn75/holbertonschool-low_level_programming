/*
 * File: 1-alphabet.c
 * Author: 7727@holbertonschool.com
 */

#include <stdio.h>
#include "main.h"
#include "_putchar.c"

/**
 * main - Prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int len = strlen(alphabet);
int i;

for(i = 0; i < len; i++)
{
_putchar(alphabet[i]);
}

return (0);

}
