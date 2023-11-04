#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb:the number
 * @size: array size
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
	{
		return (NULL);
	}
	else
	{
		return (output);
	}
}
