#include "main.h"
/**
 * puts_half - prints half a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n, i;
	int length_of_the_string;

	length_of_the_string = strlen(str);
	n = (length_of_the_string - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
