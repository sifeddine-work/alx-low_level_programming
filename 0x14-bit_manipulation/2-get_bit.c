#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int h;

	if (index > 64)
		return (-1);

	h = n >> index;

	return (h & 1);
}
