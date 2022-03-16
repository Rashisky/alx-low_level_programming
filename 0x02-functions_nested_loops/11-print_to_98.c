#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * @n: integer argument
 * Return: Always 0 Success
 */
void print_to_98(int n)
{
	for (n = '0'; n <= '98'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
