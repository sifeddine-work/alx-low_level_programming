#include "main.h"
#include <stdio.h>
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
 * *str_concat - function that concatenates two strings.
 * @s1: frist string
 * @s2: secode string
 * Return: concatenate s1 with s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int size1, size2, i;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = strsize(s1);
	size2 = strsize(s2);
	s3 = malloc((size1 + size2) * sizeof(char) + 1);
	if (s3 == NULL)
		return (NULL).
	for (i = 0; i < size1 + size2; i++)
	{
		if (len < size1)
			s3[len] = s1[len];
		else
			s3[len] = s2[len - size1];
	}
	s3[len] = '\0';
	return (s3);
}
