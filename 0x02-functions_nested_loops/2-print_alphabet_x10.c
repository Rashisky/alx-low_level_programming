#include "main.h"

/**
 * main - prints 10 times the alphabet in lowercase
 * Return: 0 means Success
 */
int main(void)
{
	char i;
	int k = 0;

	print_alphabet_x10(void)
	{
		while (k <= 10)
		{
			for (i = 'a'; i <= 'z'; i++)
				_putchar(i);
			_putchar('\n');
			k = ++k;
		}
	}
	return (0);
}
