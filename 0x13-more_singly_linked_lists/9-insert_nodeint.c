#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - the function Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
   listint_t* new=(listint_t*)malloc(sizeof(listint_t));
   unsigned int i;
   if(new==NULL)
   {
       return NULL;
   }
   new->n=n;
   if(idx==0)
   {
       new->next=*head;
       *head=new;
       return new;
   }
   listint_t* temp=*head;
   for (i=0;i<idx-1;i++)
   {
       if(temp==NULL)
       {
           free(new);
           return NULL;
       }
       temp=temp->next;
   }
   if(temp==NULL)
       {
           free(new);
           return NULL;
       }
       new->next=temp->next;
       temp->next=new;
       return new;
}
