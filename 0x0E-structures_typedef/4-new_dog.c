#include "dog.h"

/**
 * new_dog - function with 3 parameter
 * @name: name of the new dog
 * @age: age of the dog
 * @owner: owner of the the dog
 *
 * Description: function that creates a new dog.
 * Return: pointer to structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
