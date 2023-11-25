#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - set the value of a bit to 0.
 * @n: the bits
 * @index: number
 *
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
