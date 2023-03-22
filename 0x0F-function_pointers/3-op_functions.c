#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - return sum
 * @a: input num
 * @b: input num
 *
 * Return: Sum of addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return difference
 * @a: input num
 * @b: input num
 *
 * Return: Difference of subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return product
 * @a: input num
 * @b: input num
 *
 * Return: Product of multiplcation.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return division
 * @a: input number
 * @b: input num
 *
 * Return: Quotient of division.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/*
 * op_mod - return remainder
 * @a: input
 * @b: input
 *
 * Return: Remainder of division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
