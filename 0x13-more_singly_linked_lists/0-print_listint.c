#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: A pointer to the head of the list_t list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)

{
printf("%d\n", h->n);

nodes++;

h = h->next;
}

return (nodes);
}
