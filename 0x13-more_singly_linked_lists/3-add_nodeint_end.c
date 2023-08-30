#include "lists.h"
#include <stdio.h>

 /**
  * add_nodeint_end -this function adds a new node at the end of a listint_t list.
  * @head: pointer to pointer of first element of list.
  * @n: element to be added in the list.
  *
  * Return: address of the new element or NULL if it fails.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
   listint_t* new=(listint_t* )malloc(sizeof (listint_t));
   if(new==NULL)
   {
       return NULL;
   }
   new->n=n;
   new->next=NULL;
   if(*head==NULL)
   {
       *head=new;
   }
   else
   {
       listint_t *current=*head;
       while(current->next!=NULL)
       {
           current=current->next;
       }
       current->next=new;
   }
   return new;
}

