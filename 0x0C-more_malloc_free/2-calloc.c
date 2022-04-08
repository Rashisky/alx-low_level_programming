#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: memory for an array of nmemb
 * @size: size bytes
 * Return: null if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned t, sum;

	t = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size + 1);
	if (mem == NULL)
		return (NULL);
	sum = nmemb * size;
	while (t < sum)
	{
		mem[t] = 0;
		t++;
	}
	mem[t] = '\0';
	return (mem);
}
