#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * add - return the sum value of input
 *@n: input integer
 *@m: input integer
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int add(int n, int m)
{
	int su;

	su = n + m;

	return (su);
}
