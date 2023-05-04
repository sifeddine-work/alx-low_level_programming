#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: unsigned long int
 * @index: position (unsigned int)
 *
 * Return: integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ptr;

	if (index > 64)
		return (-1);

	for (ptr = 1; index > 0; index--, ptr *= 2)
		;

	n += ptr;

	return (1);
}
