#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: pointer to first node
 *
 * Return: (integer) sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
