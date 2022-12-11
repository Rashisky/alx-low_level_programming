#include "lists.h"

/**
 * print_dlist - function that prints all the elements of a dlistint_t list
 * @h: pointer to the first node
 */
size_t print_dlistint(const dlistint_t *h)
{
    dlistint_t *temp;
    int count = 0;
    if (h)
    {
        temp = (dlistint_t *)h;

        while (temp != NULL)
        {
            printf("%d\n", temp->n);
            temp = temp->next;
            count += 1;
        }

        return count;
    }

    return (count);
}
