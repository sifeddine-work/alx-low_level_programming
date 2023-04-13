#include "main.h"
/**
 * *_memset - fulls memory with a constant byte
 * @s: pointer to char
 * @b: character
 * @n: unsigned integer
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: integer
 * @size: unsigned integer
 * Return: pointer to char
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
