#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
        int i;
	int len;

	len = 0;
        while(s[i] != '\0')
        {
                len++;
                i++;
        }
        return (len);
}
