/*
 * File: 1-isdigit.c
 * Author: 7727@holbertonschool.com
 */

#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @c: Choosen character (ASCII)
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */

char *_strcat(char *dest, const char *src) {
    char *result = dest;

    // Move the dest pointer to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }

    // Copy the src string to the end of the dest string
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Add the null terminator to the concatenated string
    *dest = '\0';

    return result;
}
