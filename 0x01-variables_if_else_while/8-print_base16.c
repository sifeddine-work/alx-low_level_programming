#include <stdio.h>
/**
 * main - Entry point
 * Description: 'program that prints numbers of base 16'
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
