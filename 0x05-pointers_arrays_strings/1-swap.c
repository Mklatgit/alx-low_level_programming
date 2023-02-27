#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps pointers
 *@a: input pointer
 *@b: second input pointer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
