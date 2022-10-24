#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data
 *	(n) of a listint_t list.
 * @head: pointer to head of listint_t list
 * Return: if empty - 0 otherwise - sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
