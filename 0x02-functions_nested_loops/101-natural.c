#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b = 0, n = 1024;

	printf("List of numbers from 0 to %d that are multiples of 3 and 5 :\n", n);
	for (a = 0; a < n; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			printf("%d ", a);
			if (a < n - 1)
			{
				printf(",");
			}
			b = b + a;
		}
	}
	printf("\nTheir Sum is: %d", b);
	return (0);
}
