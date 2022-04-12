#ifndef __STRUCT_DOG__
#define __STRUCT_DOG__

/**
 * struct dog - a function that takes in 3 arguments which are:
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This give the type an owner of such dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - New type defintion
 * Description: This is the new data type for struct dog data type
 */

typedef struct dog dog_t;

#endif
