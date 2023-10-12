#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (j == 0)
				_putchar('0' + result);
			else
			{
				_putchar('0' + result);
				if (j != 9)
					_putchar(',');
			}
			/*_putchar(result + ' ' + '0');*/
		}
		_putchar('\n');
	}
}
