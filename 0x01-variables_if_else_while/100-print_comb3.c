#include <stdio.h>
/**
 *main - Enty point
 *Description: programm prints all possible different combinitions of 2 digits
 *Return: 0 (SUCCESS)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		++j = 49;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
			if (i == 56 && j == 57)
				continue;
			j++;
		}
	}
	return (0);
}
