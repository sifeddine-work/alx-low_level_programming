#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t cpt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cpt++;
		h = h->next;
	}

	return (cpt);
}
