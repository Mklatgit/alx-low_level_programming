#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b = 0, n = 1024;
	
	for (a = 0; a < n; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b = b + a;
		}
	}
	printf("Sum is: %d\n", b);
	return (0);
}
