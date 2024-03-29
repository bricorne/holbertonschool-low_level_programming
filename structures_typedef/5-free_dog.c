#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function
 * @d: free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
