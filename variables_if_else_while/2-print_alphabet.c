/*
 * File: 2-print_alphabet.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowecase, followed by new line
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

putchar(variable);

return (0);

}
