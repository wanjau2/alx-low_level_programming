#include "3-calc.h"
/**
 * op_add - Return the sum of two number
 * @a:first
 * @b: second
 * Return: the sum
 */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return product
 * @a: first
 * @b: second
 *
 * Return: sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplier
 *@a:first
 *@b:second
 *Return: Always 0.
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divides
 *@a:first
 *@b:second
 *Return:Always 0.
 *
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - modulus
 *@a:first
 *@b:second
 *Return: Always 0.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
