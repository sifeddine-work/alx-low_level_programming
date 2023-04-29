#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int cpt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cpt++;
	}

	return (cpt);
}
