#include "dog.h"
/**
 * _strdup - function with 1 argument_strdup.
 * @str: string argument
 *
 * Description: returns a pointer to allocated space in memory
 * Return: ponter to char
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

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
	dog->name = _strdup(name);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = _strdup(owner);
	if (!dog->owner)
	{
		free(dog);
		return (NULL);
	}

	return (dog);
}
