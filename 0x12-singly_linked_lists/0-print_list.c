#include <stdio.h>
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
    int count = 0;

    if (h->str == NULL)
    {
        printf("[0] (nil)\n");
        printf("[%d] %s\n", strlen(h->next->str), h->next->str);

    }
    else
    {
        while(h != NULL)
        {
            count += 1;
            printf("[%d] %s\n", strlen(h->str), h->str);
            h = h->next;
        }
    }
        return (count);

}