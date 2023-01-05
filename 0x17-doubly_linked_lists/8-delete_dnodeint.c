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
    dlistint_t *last, *temp = *head;
    dlistint_t *node;
    unsigned int count = 0;

    if (temp)
    {
        node = malloc(sizeof(dlistint_t));
        if (!(node))
            return (7);
        while (temp->next)
        {
            if (count == index)
           {
                last = (temp)->prev;
                temp = (temp)->next;
                (temp)->prev = last;

                printf("value of index and count are:%d and %d\n", index, count);
                while (count > 0)
                {
                    printf("In while loop\n");
                    *head = (*head)->prev;
                    printf("The value of (*head->n) is %d\n", (*head)->n);
                      count -= 1;
                    printf("count = %d\n", count);
                }

                return (1);
            }

            count += 1;
            temp = (temp)->next;
            *head = temp;
        }
        return (-1);
    }
    return (-1);
}
