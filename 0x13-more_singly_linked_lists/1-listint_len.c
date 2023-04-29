#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to list
 *
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t cpt = 0;

	while (h)
	{
		cpt++;
		h = h->next;
	}

	return (cpt);
}
