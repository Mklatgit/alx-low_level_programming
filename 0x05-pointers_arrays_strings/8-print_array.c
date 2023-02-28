#include "main.h"
#include <stdio.h>
/**
 * print_array- print string
 *@a: input pointer to string
 *@n: length of aaray.
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d, ", a[m]);
	}
	if (m == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
