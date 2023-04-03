#include "main.h"
/**
 * _strchr - Entry point
 * @s: pointer input
 * @c: character input
 * Return: 0 (SUCCESS)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
