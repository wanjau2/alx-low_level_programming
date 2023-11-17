#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of a line
 * @h: the pointer to the list
 *
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
