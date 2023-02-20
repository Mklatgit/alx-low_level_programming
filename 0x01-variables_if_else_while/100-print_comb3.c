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
	int cc, bb, aa, dd = 0, ee, num;

	for (cc = 1; cc < 90; cc++)
	{
		bb = cc / 10;
		aa = cc % 10;
		ee = cc;
		/* Reverse number */
		while (ee != 0)
		{
			num = ee % 10;
			dd = dd * 10 + num;
			ee /= 10;
		}
		if (bb != aa)
		{
			putchar(bb + '0');
			putchar(aa + '0');
			if (cc < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
