#include "lists.h"
#include <stdio.h>

/**
 * free_listint - the function Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */
Prototype: void free_listint(listint_t *head)
{
  listint_t* temp = head;
  listint_t* next;
  while(temp!=NULL)
  {
      next=temp->next;
      free (temp);
      temp=next;
  }
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
