#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: Number (type unsigned long int)
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int tmp;
	int num = 0;

	if (n == 0)
		printf("0");
		return;

	for (tmp = n; (tmp >>= 1) > 0; num++)
		;

	for (; num >= 0; num--)
	{
		if ((n >> num) & 1)
			printf("1");
		else
			printf("0");
	}
}
