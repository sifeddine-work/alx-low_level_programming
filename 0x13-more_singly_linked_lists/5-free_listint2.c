#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pinter to head of a list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	if (head == NULL)
		return;

	*head = NULL;
}

