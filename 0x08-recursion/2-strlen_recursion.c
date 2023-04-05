#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: pointer to character (string);
 * Return: integer(length of string)
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		len++;
		return (len + _strlen_recursion(s));
	}
}
