#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
/**
 * check_digit _ check if input string is digit
 * @s: input string
 *
 * Return: Always 0.
 */
int check_digit(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i ++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc;  i++)
	{
		if (check_digit(argv[i]))
		{
			j = atoi(argv[i]);
			sum = sum + j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
