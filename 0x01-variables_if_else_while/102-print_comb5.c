#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: first digit of a 2 digit num is the remainder of num/10
 *last digit in num mod 10 from task 1
 *then try compare output with reverse of num to get unique values
 * Return: Always 0 (Success)
 */
int main(void)
{
	int aa, bb, cc, dd;

	for (aa = 0; aa < 10; aa++)
	{
		for (bb = aa + 1; bb < 9; bb++)
		{
			for (cc = 0; cc < 10; cc++)
			{
				for (dd = cc + 1; dd < 10; dd++)
				{
					putchar(aa + '0');
					putchar(bb + '0');
					putchar(' ');
					putchar(cc + '0');
					putchar(dd + '0');
					if (aa != 10 || bb != 9 || cc != 10 || dd != 10)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
