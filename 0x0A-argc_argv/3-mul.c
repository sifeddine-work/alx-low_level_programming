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
	int mul1, mul2;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);
	printf("%d\n", mul1 * mul2);
	return (0);
}
