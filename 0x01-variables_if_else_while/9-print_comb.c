#include <stdio.h>
/**
 * main - Entry point
 * Description: 'program that print comb of numbers'
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
