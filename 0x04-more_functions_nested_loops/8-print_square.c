#include "main.h"
/**
 * print_square - function that prints a square
 *
 * @size: The dimensions of the square
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
