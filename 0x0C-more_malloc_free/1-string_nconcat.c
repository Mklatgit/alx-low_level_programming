#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes for final string
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k, l;

	i = j = k = l = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n < j)
	{
		s = malloc((j + n + 1) * sizeof(char));
	}
	else
	{
		s = malloc((i + j + 1) * sizeof(char));
	}
	if (s == NULL)
	{
		return (NULL);
	}
	k = l = 0;
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (l = 0; l < n; l++)
	{
		s[k] = s2[l];
		k++;
	}
	s[k] = '\0';
	return (s);
}
