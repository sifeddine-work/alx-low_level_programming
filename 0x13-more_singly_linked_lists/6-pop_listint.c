#include "lists.h"

/**
 * pop_listint - unction that deletes and return data of a list
 * @head: pointer to head of a list
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *current;

	current = *head;
	if (current == NULL)
		return (0);

	(*head) = (*head)->next;

	if (*head == NULL)
		return(0);

	return (current->n);

}
