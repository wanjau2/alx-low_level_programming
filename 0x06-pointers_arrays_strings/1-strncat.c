#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: The buffer
 * @src: the string
 * @n: Bytes from src
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[a + i] = *src;
		src++;
	}
	dest[a + i] = '\0';
	return (dest);
}
