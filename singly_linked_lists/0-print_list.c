#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - The function that prints all the elements of a list_t list.
 * @h - Head.
 * 
 * Return: The number of nodes.
*/
size_t print_list(const list_t *h){
    int count = 0;

    while (h->next != NULL)
    {
        count++;

        if (h->str == NULL)
        {
            printf("(null)");
        }
        

        h = h->next;
    }

    count++;

    return count;
}
