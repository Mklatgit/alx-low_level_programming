#include "lists.h"

/**
 * listint_len - return number elements of a list
 * @h: list to count
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
