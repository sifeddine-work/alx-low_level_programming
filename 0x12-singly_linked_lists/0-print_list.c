#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to list
 *
 * Return: numner of nodes pointed 
 */

size_t print_list(const list_t *h)
{
	size_t t = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		t++;
	}
	return (t);
}
