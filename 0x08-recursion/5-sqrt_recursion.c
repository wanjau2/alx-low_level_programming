#include "main.h"
/**
 * _sqrt_recursion - finds the natural sqrt of a number
 * @n: the character to print
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - check the sqrt
 * @n: the charcter
 * @i: the other
 * Return: Always 0.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
