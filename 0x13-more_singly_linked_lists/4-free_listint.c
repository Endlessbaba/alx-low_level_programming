#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */

void free_listint(listint_t *head)
{
listint_t *current = head;
while (current != NULL)
{
listint_t *next_node = current->next;
free(current);
current = next_node;
}
}
