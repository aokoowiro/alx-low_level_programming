#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to a list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
size_t nbr_nodes = 0;
const listint_t *current = h;

while (current != NULL)
{
printf("%i\n", current->n);
current = current->next;
nbr_nodes++;
}
return (nbr_nodes);
}
