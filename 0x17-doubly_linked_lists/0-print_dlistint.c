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

	while (temp != NULL)
	{
		printf("%u\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
