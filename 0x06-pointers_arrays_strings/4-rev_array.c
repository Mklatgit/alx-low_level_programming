#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses and array
 *@n: more bytes for source string
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int len, temp;

	for (len = 0; len < n--; len ++)
	{
		temp = a[len];
		a[len] = a[n];
		a[n] = temp;
	}
}
