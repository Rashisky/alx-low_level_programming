#include "main.h"

/**
 * main - prints alphabets
 * Return: 0 means Success
 */
print_alphabet(i)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}
