#include "lists.h"

/**
 * insert_nodeint_at_index - adds new node at given position
 * @head: pointer to first element
 * @n: input
 * @idx: position to insert
 *
 * Return: Address of new node or NULL if Failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;
	unsigned int i = 0;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		else
			current = current->next;
		i++;
	}
	return (NULL);
}
