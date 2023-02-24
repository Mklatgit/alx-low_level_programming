#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * mul - return the multiple value of inputs
 *@n: input integer
 *@m: input integer
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int mul(int n, int m)
{
	int su;

	su = n * m;

	return (su);
}
