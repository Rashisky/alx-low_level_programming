#include <main.h>

/**
 * main - prints the sign of a number
 * Return: 1 if Success
 */
int main(void)
{
	int n;

	if (n > 0)
		{
			print_sign(n);
			return ("+");
		}
	else if (n == 0)
	{
		print_sign(n);
		return (0);
	}
	else
	{
		print_sign("-");
		return (-1);
	}
}
