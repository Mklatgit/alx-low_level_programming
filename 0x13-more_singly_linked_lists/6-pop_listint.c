#include "lists.h"

/**
 * pop_listint - deletes the head node on list
 * @head: first node of the list
 *
 * Return: head note data.
 */
int pop_listint(listint_t **head)
{
	listint_t *rem_node = NULL;
	int l_data = -1;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	rem_node = (*head)->next;
	l_data = (*head)->n;
	free(*head);
	*head = rem_node;
	return (l_data);
}
