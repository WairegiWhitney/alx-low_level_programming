#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Detects a loop in a linked list.
 * @head: The first element of the list.
 * Return: The node where the loop starts, if found.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *s = head;
    listint_t *f = head;

    if (head == NULL)
        return (NULL);

    while (s && f && f->next)
    {
        s = s->next;
        f = f->next->next;

        if (s == f)
        {
            while (1)
            {
                s = f;

                while (f->next != s && f->next != head)
                    f = f->next;

                if (f->next == head)
                    break;

                head = head->next;
            }

            return (head);
        }
    }

    return (NULL);
}
