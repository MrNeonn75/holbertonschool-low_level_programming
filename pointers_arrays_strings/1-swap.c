/*
 * File: 1-swap.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: First pointer.
 * @b: Second pointer.
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
int swap = *b;
*b = *a;
*a = swap;

}
