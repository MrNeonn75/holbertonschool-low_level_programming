/*
 * File: 0-positive_or_negative.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


/**
 * Main - Prints last digit of random number
 *
 * Return: Always 0.
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

char random_string_number[100];

sprintf(random_string_number, "%d", n);

int number_size = strlen(random_string_number);
char last_number = random_string_number[number_size - 1];
int last_digit = last_number - '0';  // Convert char to int

char last_string[50];  // Declare outside the if-else block

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

