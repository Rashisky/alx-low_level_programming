#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node at a given
 * index of dlistint
 * @head: pointer to the first node
 * @index: index of the node to be deleted
 *
 * Return: 1 if successfull else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *last, *temp = *head;
	unsigned int count = 0;

	while (temp)
	{
		if (count == index)
		{
			last = temp->prev;
			if (!(last))
				*head = temp->next;
			else
				last->next = temp->next;
			if (temp->next)
				temp->next->prev = last;
			free(temp);
			temp = NULL;
			return (1);
		}
		count++;
		temp = temp->next;
	}

	return (-1);
}
