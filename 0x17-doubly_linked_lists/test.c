#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given position
 * @h: pointer to the first node
 * @idx: index of the node to be inserted
 * @n: data of the given node
 *
 * Return: Address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int count = 0;
    dlistint_t *temp = *h;
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    if (temp)
    {
        while (temp->next)
        {
            if ((count == (idx - 1)) || (!(temp->next->next) && (count == (idx - 2))))
            {
                new_node->prev = temp;
                new_node->next = temp->next;
                temp->next = new_node;
                return (*h);
            }
            count += 1;
            temp = temp->next;
        }

        if (!(temp->next))
        {
            if (idx == 0)
            {
                new_node->next = (*h)->next;
                new_node->prev = (*h)->prev;
                *h = new_node;
            }
            else
                return (NULL);
            return (*h);
        }
    }
    new_node->prev = NULL;
    new_node->next = NULL;
    *h = new_node;
    return (*h);
}
