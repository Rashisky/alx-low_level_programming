#include <main.h>

/**
 * main - prints alphabets
 * Return: 0 means Success
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		print_alphabet(i);
	print_alphabet('\n');
	return (0);
}
