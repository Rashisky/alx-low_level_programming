#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: pointer to the first node
 * @index: index of the node starting from 0
 *
 * Return: the node of the given index else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *node;
    unsigned int count = 0;
    dlistint_t *temp = head;

    node = malloc(sizeof(dlistint_t));

    if (node == NULL)
        return (NULL);

    if (head)
    {
        while (temp)
        {
            if (count == index)
            {
                node->n = temp->n;
                node->next = temp->next;
                node->prev = temp->prev;
                return (node);
            }
            count += 1;
            temp = temp->next;
        }
        return (NULL);
    }
    return (NULL);
}

