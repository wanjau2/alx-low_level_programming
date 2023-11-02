#include "main.h"
/**
 * _islower - checks if the first letter is a lower case
 *
 * @c: The character to print
 *
 * Return: Always 0 (success)
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
