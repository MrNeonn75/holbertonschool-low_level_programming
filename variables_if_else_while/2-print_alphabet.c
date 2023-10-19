/*
 * File: 2-print_alphabet.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Prints the alphabet in lowecase, followed by new line
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);

}
