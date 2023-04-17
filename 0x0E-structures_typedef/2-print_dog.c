#include "dog.h"
/**
 * print_dog - function with one parametre
 * @d: pointer point to structure
 *
 * Description: function that prints a struct dog
 * return: void (Nothing)
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
