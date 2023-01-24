#include "lists.h"

/**
 * add_dnodeint - function that add new node at the beginning of dlistint
 * @head: pointer to the address of the first node
 * @n: value of the new element
 *
 * Return: address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = (int)n;
	new->prev = NULL;
	new->next = NULL;

	if (*head)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	*head = new;
	return (*head);
}
