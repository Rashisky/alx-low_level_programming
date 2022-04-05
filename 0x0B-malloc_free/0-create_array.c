#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and intializes
 * it with a specific char
 * @size: unsigned size of the character
 * @c: character
 *
 * Return: returns a char
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	i = 0;
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	while (i < size)
	{
		if (s == NULL)
			return (NULL);
		s[i] = c;
		i++;
	}
	return (s);
}
