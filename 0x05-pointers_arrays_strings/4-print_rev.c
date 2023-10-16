#include "main.h"
/**
 * print_rev - prints the string in reverse
 * @s: string to be printed
 * Return: void
 *
 *void print_rev(char *s)
 *{
 *	int i;
 *	int count = 0;
 *
 *	for (i = 0; s[i] != '\0'; i++)
 *		count++;
 *	for (i = count - 1; i >= 0; i++)
 *		_putchar(s[i]);
 *
 * _putchar('\n');
 *}
 *
 */
void print_rev(char *s)
{
	int i, j;
	char temp;

	i = 0;
	j = strlen(s) - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
	for (i = 0; i != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
