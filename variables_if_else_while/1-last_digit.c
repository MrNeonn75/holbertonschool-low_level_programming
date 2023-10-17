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

srand(time(0));
n = rand() - RAND_MAX / 2;

char random_string_number[100];
int number_size;
char last_number;
int last_digit;
char last_string[50];

sprintf(random_string_number, "%d", n);
number_size = strlen(random_string_number);
last_number = random_string_number[number_size - 1];

/* Convert char to int */
last_digit = last_number - '0';

if (last_digit > 5)
{
strcpy(last_string, "greater than 5\n");
}
else if (last_digit == 0)
{
strcpy(last_string, "0\n");
}
else
{
strcpy(last_string, "less than 6 and not 0\n");
}

printf("Last digit of %s is %c and is %s", random_string_number, last_number, last_string);

return (0);

}