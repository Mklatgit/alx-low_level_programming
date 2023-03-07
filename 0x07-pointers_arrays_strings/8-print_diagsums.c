#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonal sums
 * @a: input
 * @size: size of array
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int summ = 0;
	int summ2 = 0;

	for (i = 0; i < size; i++)
	{
		summ = summ + a[i * size + i];
	}
	for (i = size; i > 0; i--)
	{
		summ2 = summ2 + a[i * size - i];
	}
	printf("%d, %d\n", summ, summ2);
}
