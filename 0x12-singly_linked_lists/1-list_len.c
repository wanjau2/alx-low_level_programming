#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function to  find the length of a function
 * @h: pointer to the list
 *
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

