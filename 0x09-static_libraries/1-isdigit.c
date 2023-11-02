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
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
