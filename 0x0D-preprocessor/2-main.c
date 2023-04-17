#include <stdio.h>
/**
 * main - print the name of the file it was compiled from.
 * @argc: number of arg
 * @argv: table content argument
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
