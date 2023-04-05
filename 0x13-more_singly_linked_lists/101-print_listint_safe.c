#include "lists.h"

size_t find_loop(const listint_t *h);
size_t print_listint_safe(const listint_t *head);

/**
 * find_loop - check if there is loop in list
 * @h: pointer to list
 *
 * Return: Number of nodes
 */
size_t find_loop(const listint_t *h)
{
	const listint_t *s;
	const listint_t *f;
	size_t count = 1;

	s = f = h;
	if (!h || !h->next)
	{
		exit(98);
	}
	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
			return (count);
		count++;
	}
	return (0);
}

/**
 * print_listint_safe - prints all elements of a list
 * @head: pointer to list to print
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t idx = 0;
	size_t nodes;

	nodes = find_loop(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			nodes++;
			head = head->next;
		}
	}
	else
	{
		while (idx < nodes)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			idx++;
			head = head->next;
		}
		printf("->[%p]%d\n", (void *)head, head->n);
	}
	return (nodes);
}
