#include "main.h"
/**
 * _puts_recursion - prints out the character to the stdout
 * @s: the charcter it prints
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}
