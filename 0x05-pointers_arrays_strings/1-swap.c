#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - resets input to given value
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
