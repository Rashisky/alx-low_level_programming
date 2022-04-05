#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this function returns a pointer to a newl
 * allocated space in memory which contains a copy of the string
 * given as a parameter
 * @str: the string to be copied from.
 *
 * Return: a copy of the string
 */

char *_strdup(char *str)
{
	char *array;
	int k = 0;
	int t = 0;

	while (str[t] != '\0')
		t++;

	if (str == NULL)
		return (NULL);

	array = malloc(sizeof(*array) * t);
	while (k < t)
	{
		if (array == NULL)
			return (NULL);
		array[k] = *str;
		k++;
		str++;
	}

	return (array);
}
