
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints  the elements of the listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: return the number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}