#include "main.h"
/**
 * _isalpha - check if its an alphabet
 *
 * @c: The character to print
 *
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c >= 'z'))
		return (1);
	else
		return (0);
}
