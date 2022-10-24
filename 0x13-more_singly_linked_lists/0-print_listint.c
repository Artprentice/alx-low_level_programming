#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a lintint_t list
 * @h: a pointer to he head of of the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		print("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
