#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: unsigned long int parameter.
 * @m: unsigned int m.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
unsigned int flip_bits(unsigned long int n, unsigned int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
