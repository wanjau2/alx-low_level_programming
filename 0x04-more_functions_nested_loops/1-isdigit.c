#include "main.h"
/**
 * _isdigit - check if the input is a digit
 *
 * @c: The character to print
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int a;

	a = c;

	if (a == 0 && a <= 9)
		return (1);
	else
		return (0);
}
