#include "main.h"
/**
 * rev_string- reverses string
 *@s: input pointer to string
 *
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char tmp;
	int i, j;
	
	tmp = s[0];
	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	for ( i = 0; i < j; i++)
	{
		j--;
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
