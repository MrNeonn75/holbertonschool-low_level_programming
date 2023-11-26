/*
 * File: 3-print_alphabets.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints the alphabet in lowecase and uppercase, followed by new line
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;
char variable = 10;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(toupper(letter));
}

putchar(variable);

return (0);

}
