#include "calc.h"
/**
 * op_add - sum two ints
 * @a: int
 * @b: int
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = (a + b);
	return (sum);
}
/**
 * op_sub - difference of two ints
 * @a: int
 * @b: int
 * Return: sub
 */
int op_sub(int a, int b)
{
	int sub;

	return (sub = (a - b));
}
/**
 * op_mul - product of two ints
 * @a: int
 * @b: int
 * Return: mul
 */
int op_mul(int a, int b)
{
	int mul;

	return (mul = (a * b));
}
/**
 * op_div - divide two ints
 * @a: int
 * @b: int
 * Return: div
 */
int op_div(int a, int b)
{
	int div;

	return (div = (a / b));
}
/**
 * op_mod - remainder of div
 * @a: int
 * @b: int
 * Return: mod
 */
int op_mod(int a, int b)
{
	int mod;

	return (mod = (a % b));
}
