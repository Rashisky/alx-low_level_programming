#include "lists.h"

/**
 * free_dlistint - func5ion that frees a dlistint_t list
 * @head: pointer to the first node
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
