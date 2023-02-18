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
	int bas;

	for (bas = 0; bas < 10; bas++)
	{
		putchar(bas + '0');
	}
	for (cc = 'a'; cc <= 'f'; cc++)
	{
		putchar(cc);
	}
	putchar('\n');
	return (0);
}
