/*
 * File: 11-print_to_98 .c
 * Author: 7727@holbertonschool.com
 */

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - A function that prints all natural numbers from n to 98,
 *  followed by a new line.
 *
 * Return: Nothing.
 */

void print_to_98(int n)
{
if (n > 98)
{
for (;n >= 98; n--)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d\n", n);
}
}
}
else
{
for(;n <= 98; n++)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d\n", n);
}

}
}


}
