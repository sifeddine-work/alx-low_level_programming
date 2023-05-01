#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: pointer to the head of list
 * @idx: (integer) position of the new node
 * @n: (integer) data of the node
 *
 * Description: function that inserts a new node at a given position.
 * Return: pointer to list added
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *tmp;
	unsigned int i = 0, length = 0;

	while (i < idx && current)
	{
		length++;
		current = current->next;
		i++;
	}

	if (i > length || current == NULL)
		return (NULL);

	tmp = current;
	current = malloc(sizeof(listint_t));

	(*current).n = n;
	(*current).next = (*tmp).next;
	tmp->next = current;

	return (current);
}
