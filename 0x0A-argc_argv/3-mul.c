#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: program that prints the number of arguments passed into it.
 * @argc: Number of command line arguments
 * @argv: tabla point to character
 * Return: (0) or (1)
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
