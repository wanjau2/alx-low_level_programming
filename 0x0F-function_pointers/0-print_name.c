#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - fuction that prints a name
 * @name: the name to print
 * @f: the pointer to function
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
