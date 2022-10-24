#include "lists.h"
/*
 * add_nodeint - adds new node at the beginning
 *	of a listint_t list.
 * @head: a pointer to the address of the head of
 *	the listint_t list
 * @n: int for the new node
 * return: if failed - NULL
 *	otherwise - address of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
