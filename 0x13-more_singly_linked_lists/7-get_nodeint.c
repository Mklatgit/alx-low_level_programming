#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of linked list
 * @h: list to check
 * @index: location of the node
 *
 * Return: nth node of the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (current != NULL && i < index)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	return (current);
}
