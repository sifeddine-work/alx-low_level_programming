#include "lists.h"
/**
 * add_node -  function that adds a new node at the beginning of a list
 * @head: pointer to a list
 * @str: string
 *
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int leng = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	for (; str[leng] != 0; leng++)
	;
	new->len = leng;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
