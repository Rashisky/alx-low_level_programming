#ifndef _RASHISKY_
#define _RASHISKY_
#include <string.h>

typedef struct list
{
    char *str;
    int len;
    struct list *next;
} list_t;
size_t print_list(const list_t *h);

#endif