/*
 * File: 0-positive_or_negative.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


/**
 * Main - Check is the random number positive or negative
 *
 * Return: Always 0.
 */

int main(void)
{
int n;
char last_string[50];

/**
 * Get random number
 * If number grater than 0, print "number is positive"
 * Or if number is zero, print "number is zero"
 * Else print "Number is negative"
*/


srand(time(0));
n = rand() - RAND_MAX / 2;


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
printf("%d %s", n, last_string);

return (0);

}

