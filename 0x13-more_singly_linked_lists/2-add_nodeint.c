#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to list
 * @n: integer
 *
 * Return: list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = malloc(sizeof(listint_t));

	if (!current)
		return (NULL);

	current->n = n;
	current->next = *head;
	*head = current;

	return (*head);
}
