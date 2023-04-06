#include "lists.h"

/**
  * print_dlistint - A function that prints a linked list
  * @h: pointer to the list
  * Return: number of nodes in the list
  */

size_t print_dlistint(const dlistint_t *h)
{
	int r = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		r++;
	}
	return (r);
}
