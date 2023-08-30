#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Safely prints a linked list of integers.
 * @head: Pointer to the head node of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    int size = 0, node;
    const listint_t *visited_nodes[100];

    if (!head)
        exit(98);

    while (head)
    {
        for (node = 0; node < size; node++)
        {
            if (visited_nodes[node] == head)
            {
                printf("-> [%p] %d\n", (void *)head, head->n);
                return (size);
            }
        }
        
        printf("[%p] %d\n", (void *)head, head->n);
        visited_nodes[size] = head;
        size++;
        head = head->next;
    }
    
    return (size);
}
