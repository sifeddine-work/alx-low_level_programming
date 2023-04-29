#include "lists.h"

/**
 * free_listint - unction that frees a list
 * @head: pointer to head of a list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(current);
		head = current;
	}
}
