#include "lists.h"
/**
 * list_len - Returns the node count(the number of elements) in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
    size_t node_count = 0; 
    
    while (h != NULL)
    {
        node_count++;    
        h = h->next; 
    }

    return node_count; 
}






