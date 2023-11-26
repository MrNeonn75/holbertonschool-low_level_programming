/*
 * File: 4-print_alphabt.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>


/**
 * main - Prints the alphabet in lowecase without q and e, followed by new line
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;
char variable = 10;

for (letter = 'a'; letter <= 'z'; letter++)
{
if ((letter == 'q') || (letter == 'e'))
{
continue;
}
else
{
putchar(letter);
}

}


putchar(variable);

return (0);

}
