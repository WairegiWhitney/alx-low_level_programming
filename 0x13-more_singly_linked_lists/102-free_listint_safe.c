#include "lists.h"

/**
 * free_listint_safe - Safely frees a linked list.
 * @h: Pointer to the pointer of the list's start to be freed.
 * Return: The size of the freed list (number of nodes).
 */
size_t free_listint_safe(listint_t **h)
{
    size_t NCount = 0;
    listint_t *temp = NULL;

    if (!(h && *h))
        return (NCount);

    while (*h)
    {
        NCount++;
        
        if (*h > (*h)->next)
        {
            temp = *h;
            *h = (*h)->next;
            free(temp);
        }
        else
        {
            free(*h);
            *h = NULL;
        }
    }
    
    *h = NULL;
    return (NCount);
}
