#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates memory
 * @ptr: pointer to previsouly allocated memory
 * @old_size: size of memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	s = malloc(new_size);
	if (s == NULL)
	{
		return (NULL);
	}
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			s[i] = old_ptr[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			s[i] = old_ptr[i];
		}
	}
	free(ptr);
	return (s);
}
