#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  function that returia pointer to a newallocated space in memory
 * @str: string that will copy
 * Return: pointer to char
 */
char *_strdup(char *str)
{
	char *cpstr;
	int len = 0;
	
	if (str == NULL)
		return (NULL);
	while (*str =! '\0')
	{
		len++;
		str++;
	}
	cpstr = malloc(len * sizeof(*str) + 1);
	if (cpstr == NULL)
		return (NULL);
	while (len--)
	{
		cpstr[len] = str[len];
	}
	return (cpstr);
}
