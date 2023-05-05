#include "main.h"

/**
 * flip_bits - function
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Description: returns the number of bits you would need
 * to flip to get from one number to another.
 *
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int Dif;
	int cpt = 0;

	Dif = n ^ m;

	while (Dif)
	{
		cpt++;
		Dif &= (Dif - 1);
	}

	return (cpt);
}
