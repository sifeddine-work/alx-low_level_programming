#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function creates an array of charand initializes it with char
 * @size: the lenght of array
 * @c: specific char
 * Return: poiter to array OR null
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(size);
	if (size == 0 || ptr == NULL)
		return (NULL);
	while (size--)
		ptr[size] = c;
	return (ptr);
}
