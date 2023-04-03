#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: list to print
 *
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *rem_node = NULL;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		rem_node = (*head)->next;
		free(*head);
		*head = rem_node;
	}
	*head = NULL;
}
