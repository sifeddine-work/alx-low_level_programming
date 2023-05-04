#include "main.h"

/**
 * int binary_to_uint - function that converts a binary number to an unsigned in
 * @b: const char (string of 0 and 1)
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, pow = 1;
	int l = 0;

	if (b = NULL)
		return (0);

	for (; b[l]; l++)
	{
		if (b[l] != '0' &&  b[l] != '1')
			return (0);
	}

	for (len--; len >= 0; len--, pow *= 2)
	{
		if (b[l] == '1')
			result += power;
	}

	return (result);
}
