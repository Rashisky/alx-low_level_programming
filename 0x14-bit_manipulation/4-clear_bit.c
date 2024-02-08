#include "main.h"

/**
 * clear_bit - function that sets the value of bit to 0
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int u;

	if (index > 63)
		return (-1);

	u = 1 << index;

	if (*n & u)
		*n ^= u;

	return (1);
}
