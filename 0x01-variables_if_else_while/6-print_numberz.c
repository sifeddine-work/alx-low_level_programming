#include <stdio.h>
/**
 * main - Entry point
 * Description: 'program that prints numbers of base 10 using putchar'
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
