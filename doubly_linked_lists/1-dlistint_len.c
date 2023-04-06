#include "lists.h"

/**
 * dlistint_len - A function that gets the number of nodes of linked list
 * @h: head of linked list
 * Return: number of nodes as size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	int r = 0;

	while (h)
	{
		h = h->next;
		r++;
	}
	return (r);
}
