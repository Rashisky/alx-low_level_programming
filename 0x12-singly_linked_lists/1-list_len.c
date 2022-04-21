#include "lists.h"


/**
 * list_len - function that returns the number of
 * elements of a list_t list
 * @h: Takes in a pointer to struct list_t parameter
 * if str is NULL, print [0] (nil)
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}

	return (count);
}
