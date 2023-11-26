/*
 * File: 9-print_comb.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>


/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int number;

for (number = 48; number < 58; number++)
{
putchar(number);

if (number != 57)
{
putchar(44);
putchar(32);
}

}

putchar(10);

return (0);

}
