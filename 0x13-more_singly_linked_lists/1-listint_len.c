#include "lists.h"
/**
 * listint_len - prints the number of elements in a linked list
 * @h: the linked list that is passed
 * Return: integer
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}