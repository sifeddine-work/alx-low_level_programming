#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n:nuber of caracter thatwill add a string 1
 * Return: pointer point to concatenate of s1,s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; ++i)
		;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; ++j)
		;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
