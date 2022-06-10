#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * function that returns the number of elements in
 * a linked dlistint_t list
 * @h: nodes to be counted
 * Returns: number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	size_t count = 0;
	while (temp != 0)
	{
		if (temp->n != '\0')
			count++;
		temp = temp->next;
	}

	return (count);
}
