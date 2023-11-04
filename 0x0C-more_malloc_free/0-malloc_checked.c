#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function tha alocates memory using malloc
 * @b: the character to print
 *
 * Return: On success pointer
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	else
	{
		return (c);
	}
}
