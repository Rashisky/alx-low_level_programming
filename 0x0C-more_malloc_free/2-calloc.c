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
	unsigned int t, sum;

	t = 0;
	sum = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(sum);
	if (mem == NULL)
		return (NULL);
	while (t < sum)
	{
		mem[t] = 0;
		t++;
	}
	return (mem);
}
