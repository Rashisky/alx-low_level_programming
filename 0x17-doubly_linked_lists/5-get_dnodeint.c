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
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;

	while (count <= index)
	{
		if (count == index)
			break;
		head = head->next;
		count++;
	}
	return (head);
}
