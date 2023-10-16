#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: The character to print
 *
 * Return: ALways 0.
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	j = strlen(s) - 1;
	i = 0;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
