#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: pointer point to the first node of a list
 * @index: nht node
 *
 * Return: pionter to a node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0, length = 0;

	while (current && i < index)
	{
		length++;
		current = current->next;
		i++;
	}

	if (index > length)
		return (NULL);

	return (current);
}
