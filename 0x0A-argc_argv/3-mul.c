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
	int mul1, mul2, result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);
	result = mul1 * mul2;
	printf("%d\n", result);
	return (0);
}
