#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int idx;
	unsigned int hd;

	if (index > 64)
		return (-1);
	hd = index;
	for (idx = 1; hd > 0; idx *= 2, hd--)
		;

	if ((*n >> index) & 1)
		*n -= idx;

	return (1);
}
