#include "main.h"
/**
 * _memcpy - copies the memory area
 * @dest: the memory area it copies to
 * @src: the memory area its copies from
 * @n: the number of copied bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
