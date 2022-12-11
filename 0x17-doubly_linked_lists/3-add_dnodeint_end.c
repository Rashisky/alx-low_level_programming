#include "lists.h"

/**
 * add_dnodeint - function that add new node qt the beginning of dlistint
 * @head: pointer to the address of the first node
 * @n: value of the new element
 *
 * Return: address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *temp;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = (int)n;
    new->next = NULL;

    if (*head)
    {
        temp = *head;

        while (temp->next)
            temp = temp->next;
        temp->next = new;
        new->prev = temp;
    }
    else
    {
        new->prev = NULL;
        *head = new;
    }

    return (*head);
}
