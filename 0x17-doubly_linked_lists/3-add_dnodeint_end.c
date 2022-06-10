#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * function that adds a new node at the end of a
 * dlistint_t list
 * @head: the pointer to the first node
 * @n: the data value of the node
 *
 * Return: returns the address of the new element
 * or fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	ptr = *head;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
		temp->prev = ptr;
		ptr = temp;
	}

	return (*head);
}
