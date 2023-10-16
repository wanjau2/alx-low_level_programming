#include "main.h"
/**
 * swap_int - swap two numbers
 *
 * @b: The character to print
 * @a: The character to print
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
