#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginnitg of a dlistint_t list
 * @head: A pointer to the head of the dlistint_t list.
 * @n: the integer for the new node
 *
 * Return: if the function fails - Null.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n;
	new->next = NULL;
	new->prev = *head;
	if (*head != NULL)
		*head->next = new;
	*head = new;

	return (new);
}
