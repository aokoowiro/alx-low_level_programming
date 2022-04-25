#include "lists.h"
/**
 * pop_listint - Deletes the first element of a list
 * @head: pointer to the first node of the list
 * Return: The number inside the node that is deleted
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int removed = 0;

if (*head == NULL)
return (removed);

if (*head == NULL)
return (removed);

temp = *head;
removed = temp->n;
/*make head point to the next element*/
*head = (*head)->next;
free(temp);

return (removed);
}
