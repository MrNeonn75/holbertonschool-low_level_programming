/*
 * File: 1-last_digit.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int generateRandomNumber(void);
int getLastDigit(int n);
void analyzeLastDigit(int n, int last_digit, char *last_string);

/**
 * main - Prints last digit of random number
 *
 * Return: Always 0.
 */
int main(void)
{
int n = generateRandomNumber();
int last_digit = getLastDigit(n);
char last_string[50];

analyzeLastDigit(n, last_digit, last_string);

printf("Last digit of %d is %d and is %s", n, last_digit, last_string);

return (0);

}

int generateRandomNumber(void)
{
srand(time(0));
return rand() - RAND_MAX / 2;

}

int getLastDigit(int n)
{
char random_string_number[100];
sprintf(random_string_number, "%d", n);
int number_size = strlen(random_string_number);
char last_number = random_string_number[number_size - 1];

// Convert char to int
return last_number - '0';

}

void analyzeLastDigit(int n, int last_digit, char *last_string)
{
if (n >= 0)
{
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
}
else
{
strcpy(last_string, "less than 6 and not 0\n");
}

}
