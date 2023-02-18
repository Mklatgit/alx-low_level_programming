#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cc;

	for (cc = 'a'; cc <= 'z'; cc++)
	{
		putchar(cc);
	}
	putchar('\n');
	return (0);
}
