#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - the functin Frees a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
  listint_t* temp = head;
  listint_t* next;
  while(temp!=NULL)
  {
      next=temp->next;
      free (temp);
      temp=next;
  }
  *head=NULL;

}
