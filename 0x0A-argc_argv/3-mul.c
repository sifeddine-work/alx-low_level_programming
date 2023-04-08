#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: program that prints the number of arguments passed into it.
 * @argc: Number of command line arguments
 * @argv: tabla point to character
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
