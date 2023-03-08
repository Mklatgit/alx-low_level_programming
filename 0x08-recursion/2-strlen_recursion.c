#include "main.h"

/**
 * _strlen_recursion - returns length of string
 *@s: input string
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
