#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - the function adds a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
 listint_t* addded_node=(listint_t*)malloc(sizeof(listint_t));
 if(addded_node==NULL)
 {
     return NULL;
 }
 addded_node->n=n;
 addded_node->next=*head;
 *head=addded_node;
 return addded_node;
}
