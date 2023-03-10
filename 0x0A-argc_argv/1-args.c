#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
