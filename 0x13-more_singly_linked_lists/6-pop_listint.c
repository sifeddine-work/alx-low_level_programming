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
	int value;

	if (!head)
		return (0);

	value = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (value);

}
