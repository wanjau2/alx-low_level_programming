#include "main.h"
/**
 *print_alphabet_x10 - function that prints the alphabet in lower case 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char i;
	int a;

	for (a = 0; a <= 10; a++)
	{
		for (i = 'a'; a <= 'z'; i++)
			_putchar(i);

	}
	_putchar('\n');
}
