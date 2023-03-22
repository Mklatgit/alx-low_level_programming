#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - perfoms mathematical operation
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i, j;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	s = argv[2];
	j = atoi(argv[3]);
	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*s == '/' && j == 0) || (*s == '%' && j == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(s)(i, j));
	return (0);
}
