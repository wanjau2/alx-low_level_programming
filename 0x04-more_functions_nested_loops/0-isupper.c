#include "main.h"
/**
 * _isupper - checks if the letter is uppercase
 *
 * @c: the character to print
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	int a;
	a = c;

	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}
