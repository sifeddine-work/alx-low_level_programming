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
	unsigned int i = 0;

	tmp = malloc(sizeof(listint_t));
	if (!head || !current)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}

	while (i < idx && current)
	{
		if (i == idx - 1)
		{
			tmp->next = current->next;
			current->next = tmp;

			return (tmp);
		}
		else
			current = current->next;

		i++;
	}

	return (NULL);
}
