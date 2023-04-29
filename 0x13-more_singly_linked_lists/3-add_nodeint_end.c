#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node at the end of a list
 * @head: ponter to a list
 * @n: integer
 *
 * Return: pointer to head of lits
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *current = malloc(sizeof(listint_t));

	if (!current)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = current;

	return (current);
}
