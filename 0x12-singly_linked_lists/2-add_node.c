#include "lists.h"


/**
 * add_node - function that adds a new node at the
 * beginning of a list_t list
 * @head: double pointer of data type list_t that
 * @str: The string contained in the node
 * if str is NULL, print [0] (nil)
 *
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *ret = (list_t *)malloc(sizeof(list_t));

	if (ret == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	ret->str =  strdup(str);
	ret->len = i;
	ret->next = *head;
	/* Where address *head = 00000000 */
	/* and while the value is NULL */

	return (ret->next);
}
