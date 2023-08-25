#include "lists.h"
#include <stdio.h>


/**
 * print_list - Prints all elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0; 
    while (h)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n"); 
        }
        else
        {
            printf("[%lu] %s\n", node_count, h->str); 
        }
        node_count++; 
        h = h->next;   
    }

    return node_count; 
}

