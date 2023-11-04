#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concates two strings
 * @s1: the charcter to print
 * @s2: the character to print
 * @n: the number of strings
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *c;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2len++;
	}
	c = malloc(sizeof(char) * (s1len + n) + 1);
	if (c == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			c[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			c[s1len + 1] = '\0';
		c[s1len + 1] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			c[i] = s1[i];
		for (i = 0; i < n; i++)
			c[s1len + i] = s2[i];
		c[s1len + i] = '\0';
	}
	return (c);
}
