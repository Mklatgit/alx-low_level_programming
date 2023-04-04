#include "lists.h"

int pop_listint(listint_t **head);
/**
 * delete_nodeint_at_index - delete node at index
 * @head: list to print
 * @index: position where to delete
 *
 * Return: Always 1 if succeeded -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *rem_node = *head;
	listint_t *prev_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(rem_node);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (rem_node->next == NULL)
		{
			return (-1);
		}
		rem_node = rem_node->next;
	}
	prev_node = rem_node->next;
	rem_node->next = prev_node->next;
	free(prev_node);
	return (1);
}
