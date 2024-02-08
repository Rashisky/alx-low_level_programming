#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if:
 * there is one of more chars in the string b that is not 0 or 1
 * b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned result = 0, checker = 1;

	if (b)
	{
		while (b[len])
		{
			if (b[len] == 48 || b[len] == 49)
				len++;
			else
				return (0);
		}
		len--;
		for (; len >= 0; len--)
		{
			if (b[len] == 49) /*if (b[len] == '1')*/
				result += checker;
			checker *= 2;

		}
		return (result);
	}
	return (0);
}
