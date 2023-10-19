/*
 * File: 6-print_numberz.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>


/**
 * main - Prints all single digit numbers of base 10 starting 0, followed by new line
 *
 * Return: Always 0.
 */
int main(void)
{
int number;

for (number = 48; number < 58; number++)
{
putchar(number);
}

putchar(10);

return (0);

}
