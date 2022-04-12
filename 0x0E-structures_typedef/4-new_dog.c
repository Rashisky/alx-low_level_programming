#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner's name
 *
 * Return: Nothing if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy;
	int sn, so, i;

	sn = so = i = 0;
	copy = malloc(sizeof(*copy));
	if (copy == NULL)
		return (NULL);
	while (name[sn])
		sn++;
	while (owner[so])
		so++;
	copy->name = malloc(sn + 1);
	copy->owner = malloc(so + 1);

	if (copy->name == NULL || copy->owner == NULL)
		return (NULL);
	copy->name = name;
	copy->age = age;
	copy->owner = owner;

	return (copy);
}
