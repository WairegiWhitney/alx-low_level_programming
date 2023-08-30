#include "lists.h"

/**
 * delete_nodeint_at_index - Removes a node from a listint_t list
 *                          at a specified index.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @index: The index of the node to be removed (starting from 0).
 *
 * Return: On success, returns 1.
 *         On failure (such as invalid index), returns -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp, *current = *head;
    unsigned int i;

    if (current == NULL)
        return (-1);

    if (index == 0)
    {
        *head = (*head)->next;
        free(current);
        return (1);
    }

    for (i = 0; i < (index - 1); i++)
    {
        if (current->next == NULL)
            return (-1);

        current = current->next;
    }

    temp = current->next;
    current->next = temp->next;
    free(temp);
    return (1);
}
