#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list
 * @h: nodes to be counted
 * Return: number of elements in the linked list
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
	h = temp;

	return (count);
}
