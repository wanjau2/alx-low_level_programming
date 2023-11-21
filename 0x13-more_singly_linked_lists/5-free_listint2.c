#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head: pointer to linkint_t list
 *
 * Return: NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
