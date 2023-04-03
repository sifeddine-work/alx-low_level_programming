#include "main.h"
/**
 * _memset - nction that fills memory with a constant byte
 * @s: pointer to char
 * @b: character
 * @n: int unsigned
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i <	 n; i++)
	{
		s[i] = b;
	}
	return (s);
}
