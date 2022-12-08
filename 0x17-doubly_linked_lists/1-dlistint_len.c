#include "lists.h"

/**
 * dlistint_len - count the number of elements in a linked dlistint_t list
 * @h: The head of the list
 *
 * Return: the number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
