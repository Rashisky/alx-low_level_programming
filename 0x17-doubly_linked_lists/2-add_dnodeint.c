#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of dlistint_t list.
 * @head: the pointer to the first node
 * @n: the data value of the node
 *
 * Return: returns the address of the new element
 * or fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	ptr = *head;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;

	if (*head == NULL)
	{
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		ptr->prev = temp;
		temp->next = ptr;
		*head = temp;
		ptr = *head;
	}

	return (*head);
}
