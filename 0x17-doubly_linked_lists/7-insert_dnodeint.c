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
	dlistint_t *temp = *h, *new_node;
	const int u = (const int)n;

	if (*h || count == idx)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->n = u;
		if (!(*h) || count == idx)
		{
			add_dnodeint(h, u);
			return (new_node);
		}
		while (temp || count == idx)
		{
			if (temp && (count == idx))
			{
				new_node->next = temp;
				new_node->prev = temp->prev;
				if (temp->prev)
					temp->prev->next = new_node;
				temp->prev = new_node;
				return (new_node);
			}
			else if (!(temp))
			{
				add_dnodeint_end(h, u);
				return (new_node);
			}
			count += 1;
			temp = temp->next;
		}
	}
	return (NULL);
}
