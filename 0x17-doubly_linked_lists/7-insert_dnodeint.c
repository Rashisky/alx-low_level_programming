#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: pointer to the first node
 * @idx: index of the node to be inserted (starting from 0)
 * @n: data of the given node
 *
 * Return: Address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp = *h;
	dlistint_t *new_node, *temp2 = temp;

	if (temp)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->prev = NULL;
		while (temp)
		{
			if (count == idx)
			{
				new_node->next = temp2->next;
				if (temp->prev == NULL)
					*h = new_node;
				else
				{
					new_node->prev = temp2;
					if (temp->prev)
					{
						new_node->prev = temp->prev;
						temp->prev = new_node;
					}
					temp2->next = new_node;
				}
				return (*h);
			}
			temp2 = temp;
			count += 1;
			temp = temp->next;
		}
		if (count == idx)
		{
			new_node->next = temp;
			new_node->prev = temp2;
			temp2->next = new_node;
			return (*h);
		}
	}
	return (*h);
}
