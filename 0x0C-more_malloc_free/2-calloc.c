#include "main.h"
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: integer
 * @size: unsigned integer
 * Return: pointer to char
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(size * nmemb);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		m[i] = 0;
	return (m);
}
