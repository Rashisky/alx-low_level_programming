#ifndef _RASHISKY_
#define _RASHISKY_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list - A user defined data type
 * @str: string of the first argument
 * @len: The lenght of the string argument
 * @next: A pointer to struct list that points to next node
 *
 * Description: This is a user defined data type whose name
 * was later changed to list_t using typedef
 */

typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;
size_t print_list(const list_t *h);

#endif
