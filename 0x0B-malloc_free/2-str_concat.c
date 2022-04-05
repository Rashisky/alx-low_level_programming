#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns the concat of the two strings
 */

char *str_concat(char *s1, char *s2)
{
	int i, k, t, z, n;
	char *s3;

	i = 0;
	k = 0;
	t = 0;
	n = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[k] != '\0')
		k++;
	z = i + k;
	s3 = malloc(sizeof(*s3) * z);
	while (t < z)
	{
		if (s3 == NULL)
			return ("");

		if (t < i)
		{
			s3[t] = s1[t];
			t++;
		}
		else
		{
			s3[t] = s2[n];
			t++;
			n++;
		}
	}
	return (s3);
}
