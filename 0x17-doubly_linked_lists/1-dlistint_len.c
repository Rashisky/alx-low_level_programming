#include "lists.h"

/**
 * dlistint_len - function that prints all the elements of a dlistint_t list
 * @h: pointer to the first node
 *
 * Return: size of dlistint_len element
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	int count = 0;

	if (h)
	{
		temp = (dlistint_t *)h;

		while (temp != NULL)
		{
			temp = temp->next;
			count += 1;
		}
		return (count);
	}
	return (count);
}
