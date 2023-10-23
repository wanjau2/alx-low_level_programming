#include "main.h"
/**
 * _putchar - writes the character to the stdout
 *
 * @c the charcter to print
 * Return: Always 0.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
