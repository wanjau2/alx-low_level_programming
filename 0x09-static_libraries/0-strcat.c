#include "main.h"
/**
 * _strcat -  appends the src string to the dest string
 * @dest: The sppends to this string
 * @src: The function appends this string
 *
 * Return: On success 0.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;
	int i;

	a = strlen(dest);
	b = strlen(src);

	for (i = 0; i <= b ; i++)
	{
		dest[a + i] = src[i];
	}
	return (dest);
}
