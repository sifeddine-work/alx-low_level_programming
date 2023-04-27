#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: pointer to list
 * @str: string
 *
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int leng = 0;
	list_t *tmp = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	for (; str[leng] != 0; leng++)
	;
	new->len = leng;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
