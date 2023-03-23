#include "main.h"

/**
 * more_numbers - that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i,j;

	i=0;
	while(i < 10)
	{
		j =0;
		while(j < 14)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
		j++;
		}
	i++;
	}
	_putchar('\n');
}
