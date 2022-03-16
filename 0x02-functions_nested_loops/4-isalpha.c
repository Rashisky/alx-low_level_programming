#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: integer parameter
 * Return: 0 means success
 */
int _isalpha(int c)
{
	if ('a' <= c <= 'z' || 'A' <= c <= 'Z')
		return (1);
	else
		return (0);
}
