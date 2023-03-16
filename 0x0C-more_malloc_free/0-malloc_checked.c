#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: number of bytes to allocate
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
