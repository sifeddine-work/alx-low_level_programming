#include <stdio.h>
/**
 * main - Entry point
 * Description: 'program that prints the alphabet in reverse'
 * Return: 0
 */
int main(void)
{
	int n = 122;

	while (n >= 79)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
