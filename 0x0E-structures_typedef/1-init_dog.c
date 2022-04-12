#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: The first argument of the dog
 * @name: The name of the dog
 * @age: Age of the dog
 * @owner: dog's owner name
 *
 * Description: The first argument is used to get the address
 * of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)	/* if d is given */
	{
		(*d).name = name;
		(*d).owner = owner;
		(*d).age = age;
	}
}
