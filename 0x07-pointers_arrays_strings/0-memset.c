#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: array to be filled
 * @b: constant to be used for filling
 * @n: numbers of time 'b' is to be filled
 *
 * Return: a character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
