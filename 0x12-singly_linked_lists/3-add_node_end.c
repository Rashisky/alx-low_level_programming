#include "lists.h"

/**
 * add_node_end - function that adds a ret node at
 * the end of a list_t list
 * @head: Pointer to pointer argument
 * @str: string argument to be added
 *
 * Return: the address of the ret element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ret, *tmp;
	size_t i;

	ret = malloc(sizeof(list_t));
	if (ret == NULL)
		return (NULL);

	ret->str = strdup(str);

	for (i = 0; str[nchar]; nchar++)
		;

	ret->len = i;
	ret->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = ret;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = temp->next;
		tmp->next = ret;
	}

	return (*head);
}
