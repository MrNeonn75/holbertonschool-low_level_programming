/*
 * File: 0-positive_or_negative.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Entry point, checks if a random number is positive, negative, or zero
 *
 * Return: Always 0
 */
int main(void)
{
int n;
char last_string[50];

/* Generate a random number */
srand(time(0));
n = rand() - RAND_MAX / 2;

/* Check if the number is positive, negative, or zero */
if (n > 0)
{
strcpy(last_string, "is positive\n");
}
else if (n == 0)
{
strcpy(last_string, "is zero\n");
}
else
{
strcpy(last_string, "is negative\n");
}

/* Print the number and its classification */
printf("%d %s", n, last_string);

return (0);

}
