#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to the first node
 *
 * Return: result of adding the node data else 0.
 */
int sum_dlistint(dlistint_t *head)
{
    unsigned int sum = 0;
    dlistint_t *temp = head;

    if (head)
    {
        while (temp)
        {
            sum += temp->n;
            temp = temp->next;
        }
        return (sum);
    }

    return (sum);
}
