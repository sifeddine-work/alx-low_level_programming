#include "main.h"
#include <stdlib.h>

/**
 * strsize - fuction that return thr size of string
 * @s: string
 * Return: size
 */
int strsize(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: integer
 * @av: argument
 * Return: pointer to character
 */

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, comp = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++, nc++)
		nc += strsize(av[i]);

	ptr = malloc(sizeof(char) * nc + 1);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, comp++)
			ptr[comp] = av[i][j];
		ptr[comp] = '\n';
		comp++;
	}
	ptr[comp] = '\0';
	return (ptr);
}
