#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - function that returns the nth
 * node
 * @head: The pointer to the first node
 * @index: the node index to be found
 *
 * Return: Null if node doesn't exist else index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *idx;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	idx = head;

	while (count < index)
	{
		idx = idx->next;
		count++;
	}
	return (idx);
}
