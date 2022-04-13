#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memor block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of all the allocated space for ptr
 * @new_size: is the new size in bytes of the new memory block
 *
 * Return: Nothing!!
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	ptr = malloc(old_size);
	if (ptr == NULL)
	{
		ptr = realloc(ptr, new_size);
	}
	if (new_size > old_size)
		;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		ptr = realloc(ptr, new_size);
	}
	while (i < (old_size + new_size))
	{
		ptr[i] = 

}

