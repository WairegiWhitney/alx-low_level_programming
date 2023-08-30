#include "lists.h"

/**
  * reverse_listint - Reverses a listint_t linked list.
  * @head: Pointer to a pointer to the first element of the list.
  *
  * Return: Pointer to the first node of the reversed list.
  */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *temp, *current;

    temp = NULL;
    current = NULL;

    while (*head != NULL)
    {
        current = *head;
        *head = (*head)->next;
        current->next = temp;
        temp = current;
    }

    *head = current;
    return (*head);
}
