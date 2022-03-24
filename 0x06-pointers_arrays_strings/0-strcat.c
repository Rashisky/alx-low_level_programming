#include <string.h>
/**
 * *_strcat - appends two strings
 * @ *dest: char argument 1
 * @ *src: char arguemnt 2
 *
 * Return: a character
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
