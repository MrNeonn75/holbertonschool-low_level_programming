/*
 * File: 6-print_numberz.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>


/**
 * main - Prints all single digit numbers of base 10 starting 0,
 *  followed by new line
 *
 * Return: Always 0.
 */
int main(void)
{
char base16[] = "0123456789abcdef";
int i;

for (i = 0; i < 16; i++)
{
putchar(base16[i]);
}

putchar(10);

return (0);

}
