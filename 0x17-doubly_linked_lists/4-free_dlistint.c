#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dlistint - function that fress a dlistint_t
 * @head: Nodes to be freed
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head->prev != NULL)
		head = head->prev;
	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
