#include "main.h"
/**
 * _putchar - writes thencharacter to thr stdout
 * @c the character to print
 * Return: Always 0.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
