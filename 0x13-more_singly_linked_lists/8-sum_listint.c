#include "lists.h"

/**
 * sum_listint - sum of data in list
 * @head: list to check
 *
 * Return: sum of all data in the list.
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int i = 0;

	while (current != NULL)
	{
		i += current->n;
		current = current->next;
	}
	return (i);
}
