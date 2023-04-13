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
	int i, j, size_s1 = 0, size_s2 = 0;

	if (s1 == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	else
	{
		for (; s1[size_s1] != '\0'; size_s1++)
		;
	}

	if (s2 == NULL)
		s2 = "";
	else
	{
		for (; s2[size_s2] != '\0'; size_s2++)
		;
	}

	s = malloc(sizeof(char) * (size_s1 + n) + 1);
	if (s == NULL)
		return (NULL);

	for (j = 0; j < size_s1; j++)
		s[j] = s1[j];
	for (i = 0; i < size_s2; i++)
		s[i + size_s1] = s2[i];
	s[n + size_s1] = '\0';
	return (s);
}
