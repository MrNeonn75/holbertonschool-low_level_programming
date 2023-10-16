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

    char last_string[50];
    if(n > 0)
    {
        strcpy(last_string, "is positive");
    }
    else if (n == 0)
    {
        strcpy(last_string, "is zero");
    }
    else
    {
        strcpy(last_string, "is negative");
    }
    
    printf("%d %s", n, last_string);

    return (0);

}

