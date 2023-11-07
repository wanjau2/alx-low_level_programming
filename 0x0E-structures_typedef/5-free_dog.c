#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the memory
 * @d:the struct to free
 * Return:null
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
