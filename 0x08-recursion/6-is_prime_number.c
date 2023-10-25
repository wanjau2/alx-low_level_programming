#include "main.h"
/**
 * is_prime_number - checks if the number is a prime number
 * @n: the character to print
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - check the prime
 * @n: the character
 * @i: the character
 * Return: Always 0.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
