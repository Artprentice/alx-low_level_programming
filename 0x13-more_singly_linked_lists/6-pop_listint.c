#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to the  address of head
 * Return: if list empty - 0, otherwise - head nodes
 *	data n
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (ret);
}
