#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - fonction
 * @d: dog attributes
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return;

d->name = name;
d->age = age;
d->owner = owner;
}
