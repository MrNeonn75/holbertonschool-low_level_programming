/*
 * File: 1-last_digit.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Prints last digit of random number
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
char r[100];
int number_size;
char ln;
int last_digit;
char ls[50];
char a[] = "Last digit of";
char f[] = " and is ";

srand(time(0));
n = rand() - RAND_MAX / 2;

sprintf(r, "%d", n);
number_size = strlen(r);
ln = r[number_size - 1];

/* Convert char to int */
last_digit = ln - '0';

if (n >= 0)
{
if (last_digit > 5)
{
strcpy(ls, "greater than 5\n");
}
else if (ls == 0)
{
strcpy(ls, "0\n");
}
else
{
strcpy(ls, "less than 6 and not 0\n");
}

}
else
{
strcpy(ls, "less than 6 and not 0\n");
}

if (n < 0)
{
printf("%s %s is -%c%s%s",a, r, ln, f, ls);
}
else
{
printf("%s %s is %c%s%s",a, r, ln, f, ls);
}

return (0);

}
