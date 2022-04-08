#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * b: one non-negative integer parameter
 */

void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(sizeof(*mem) * b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
