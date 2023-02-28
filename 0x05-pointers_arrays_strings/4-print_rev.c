#include "main.h"
/**
 * print_rev- print string
 *@s: input pointer to string
 *@n: length of string
 *_strlen- returns length of string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len, i;
	char *fst, *lst, tmp;
	
	len = _strlen(s);
	fst = s;
	lst = s;
	
	for (i = 0; i < len - 1; i++)
	{
		lst ++;
	}
	for (i = 0; i < len / 2; i++)
	{
		tmp = *lst;
		*lst = *fst;
		*fst = tmp;
		fst ++;
		lst --;
	}
	_putchar(tmp);	
	
}
