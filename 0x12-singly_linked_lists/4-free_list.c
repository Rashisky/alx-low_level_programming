#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: The pointer to be freed
 */
void free_list(list_t *head)
{
	list_t *all;

	while ((all = head) != NULL)
	{
		head = head->next;
		free(all->str);
		free(all);
	}
}
