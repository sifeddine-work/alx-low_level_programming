#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  function that returna pointer to a newallocated space in memory
 * @str: string that will copy
 * Return: pointer to char
 */
char *_strdup(char *str)
{
	char *cpstr;
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	cpstr = malloc(len);
	while (len--)
	{
		cpstr[len] = str[len];
	}

	if (str == NULL || cpstr == NULL)
		return (NULL);
	return (cpstr);
}
