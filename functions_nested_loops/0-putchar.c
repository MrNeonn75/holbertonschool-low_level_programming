/*
 * File: 0-putchar.c
 * Author: 7727@holbertonschool.com
 */


#include <stdio.h>

/**
 * main - Prints _putchar
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
char text[] = "_putchar";

for(i = 0; i < 8; i++)
{
_putchar(text[i]);
}


return (0);

}
