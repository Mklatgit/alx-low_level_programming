#include "lists.h"

/**
 * free_listint - frees a list
 * @head: list to print
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *rem_node = NULL;

	while (head != NULL)
	{
		rem_node = head->next;
		free(head);
		head = rem_node;
	}
}
