#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer variable string 1
 * @s2: pointer variable string 2
 * @n: numbers of string 2 to be added to string 1
 *
 * Return: char type of string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int k, u, l, v;

	k = u = l = v = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k] != '\0')
		k++;
	while (*(s2 + l) != '\0')
		l++;
	if (n >= l)
		n = l;
	t = malloc(sizeof(*t) * (k + n + 1));
	if (t == NULL)
		return (NULL);
	v = k + n;
	while (u < v)
	{
		if (u < k)
			t[u] = s1[u];
		else
			t[u] = s2[u - k];
		u++;
	}
	t[u] = '\0';

	return (t);
}
