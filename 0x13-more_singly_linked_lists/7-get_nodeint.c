#include "lists.h"
/**
 * get_nodeint_at_index - finds an indexed node
 *	of a listint_t linked list.
 * @head: a pointer to the head of the listint_t list
 * @index: the index of the node to be found
 * Return: if node doesnt exist - NULL
 *	otherwise - the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
