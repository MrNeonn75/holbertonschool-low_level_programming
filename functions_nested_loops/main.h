#include <stdio.h>
#include <string.h>

void __putchar (char text[])
{
int len = strlen(text);
int i;

for(i = 0; i < len; i++)
{
putchar(text[i]);
}

putchar(10);

}

void print_alphabet()
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

__putchar(alphabet);
}