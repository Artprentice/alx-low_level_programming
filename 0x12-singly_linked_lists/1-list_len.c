#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in
 *	a linked list_t list
 * @list_t: singly linked list node structure
 * @h: pointer to the next list node strucure
 * Return: number of elements in list
 *
 * Discription: This function counts the number of elements
 *	in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
