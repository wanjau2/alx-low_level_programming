#include "main.h"
#include <unistd.h>
/**
 * _putchar - outputs the character to the stdout put
 * @c: the charcter to print
 * Return: Always 0(success)
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
