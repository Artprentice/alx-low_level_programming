#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at end of list
 * @head: pointer to the head of list
 * @str: sting to be added to new list
 * Return: if failed - NULL, otherwise - address of 
 * 	new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		fee(new);
		return (NULL):
	}
	while (str[len])
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while(last->next != NULL)
			last = last->next;
		last->new = new;
	}
	return (*head);
}
