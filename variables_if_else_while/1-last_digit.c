/*
 * File: 1-last_digit.c
 * Auth: 7727@holbertonschool.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/* Fuctions */
int get_last_digit (int n)
{
/* Variables */
char random_string_number[100];
char last_number;
int number_size;
int last_digit;

/* Convert int to string */
sprintf(random_string_number, "%d", n);

/* Get last digit */
sprintf(random_string_number, "%d", n);
number_size = strlen(random_string_number);
last_number = random_string_number[number_size];

/* Convert char to int */
last_digit = last_number - '0';

/* Return the number */
return last_digit;

}

/**
 * main - Prints last digit of random number
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
char random_string_number[100];
char last_string[50];
char text[] = "Last digit of";
int last_digit = get_last_digit(n);


srand(time(0));
n = rand() - RAND_MAX / 2;

/* Convert int to string */
sprintf(random_string_number, "%d", n);

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

if (n < 0)
{
printf("%s %s is -%d and is %s", 
text, 
random_string_number, 
last_digit, 
last_string);
}
else
{
printf("%s %s is %d and is %s", 
text, 
random_string_number, 
last_digit, 
last_string);
}

return (0);

}