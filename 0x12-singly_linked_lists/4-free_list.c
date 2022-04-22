#include <stdio.h>

/**
 * free_list - function that frees a list_t list.
 * @head: The pointer to be freed
 */
void free_list(list_t *head)
{
	free(head);
}
