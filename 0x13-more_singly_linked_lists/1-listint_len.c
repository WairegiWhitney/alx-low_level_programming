#include "lists.h"
#include <stdio.h>

/**
 * listint_len - the function Returns the number of elements
 *               in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: it returns the number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
    size_t count=0;
    while(h!=NULL)
    {
        h=h->next;
        count++;
    }
    return count;
}

