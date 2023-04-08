#include <stdio.h>
/**
 * main - entry point
 * Description: program that prints the number of arguments passed into it.
 * @argc: Number of command line arguments
 * @argv: tabla point to character
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	(void)argv;
        printf("%d\n", argc-1);
        return (0);
}
