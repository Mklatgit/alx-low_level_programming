#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns length of string
 *@*s: input pointer to string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		s++;
		lent++;
	}
	return (lent);
}
