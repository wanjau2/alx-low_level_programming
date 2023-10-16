#include "main.h"
/**
 * print_rev - prints the string in reverse
 * @s: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;

	j = strlen(s) - 1;
	for (i = j; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
