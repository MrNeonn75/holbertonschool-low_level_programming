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
char rsn[100];
int number_size;
char last_num;
int last_digit;
char last_str[50];

srand(time(0));
n = rand() - RAND_MAX / 2;

sprintf(rsn, "%d", n);
number_size = strlen(rsn);
last_num = rsn[number_size - 1];

/* Convert char to int */
last_digit = last_num - '0';

if (n >= 0)
{
if (last_digit > 5)
{
strcpy(last_str, "greater than 5\n");
}
else if (last_digit == 0)
{
strcpy(last_str, "0\n");
}
else
{
strcpy(last_str, "less than 6 and not 0\n");
}

}
else
{
strcpy(last_str, "less than 6 and not 0\n");
}

if (n < 0)
{
printf("Last digit of %s is -%c and is %s", rsn, last_num, last_str);
}
else
{
printf("Last digit of %s is %c and is %s", rsn, last_num, last_str);
}

return (0);

}
