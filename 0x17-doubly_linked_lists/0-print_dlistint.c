#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all the elemnts of
 * a dlistint_t list
 * @h: pointer to the first node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (temp->prev != NULL)
		temp = temp->prev;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
