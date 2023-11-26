/*
 * File: 7-print_tebahpla.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowecase in reverse, followed by new line
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;
char variable = 10;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}

putchar(variable);

return (0);

}
