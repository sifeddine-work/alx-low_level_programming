#include "main.h"
/**
 * _strchr - Entry point
 * @s: pointer input
 * @c: character input
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
