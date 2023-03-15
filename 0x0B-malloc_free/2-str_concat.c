#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatinates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to array else NUll
 */
char *str_concat(char *s1, char *s2)
{
	int i, k, j = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = k = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	s = malloc((i + k + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = k = 0;
	for (j = 0; s1[j]; j++)
	{
		s[j] = s1[j];
	}
	for (k = 0; s2[k]; k++)
	{
		s[j] = s2[k];
		j++;
	}
	s[j] = '\0';
	return (s);
}
