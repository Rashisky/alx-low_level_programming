#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * print_list - function that prints all the elements of a list_t list
 * @h: Takes in a pointer to struct list_t parameter
 * if str is NULL, print [0] (nil)
 * 
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while(h != NULL)
    {
        count += 1;
        h = h->next;
    }

    return (count);
}