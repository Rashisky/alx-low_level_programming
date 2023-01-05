#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node at a given index of dlistint
 * @head: pointer to the first node
 * @index: index of the node to be deleted
 *
 * Return: 1 if successfull else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *last;
    unsigned int count = 0;

    if (*head)
    {
        while (*head)
        {
            if (count == index)
            {
                last = (*head)->prev;
                *head = (*head)->next;
                if (*head)
                    (*head)->prev = last;
                else


                while (count > 0)
                {
                    *head = (*head)->prev;
                    count -= 1;
                }

                return (1);
            }

            count += 1;
            *head = (*head)->next;
        }
        return (-1);
    }
    return (-1);
}
