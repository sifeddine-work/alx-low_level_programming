#include "dog.h"
/**
 * free_dog - function with 1 parameter
 * @d: pointer to structure dog_t
 *
 * Description: function that frees dogs.
 * Return: void (nothing)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->age);
		free(d->owner);
	}
}
