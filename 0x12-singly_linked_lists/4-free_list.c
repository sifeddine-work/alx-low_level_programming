#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: ointer to list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
