#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of string
 * @str: input string
 *
 * Return: pointer to array else NUll
 */
char *_strdup(char *str)
{
	int i, j = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
