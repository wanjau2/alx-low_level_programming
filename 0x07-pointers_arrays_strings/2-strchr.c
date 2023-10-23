#include "main.h"
/**
 * _strchr - locates a character in string
 * @s: the string that is passed
 * @c: the character
 *
 * Return: On success  a pointer
 * On failure NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
