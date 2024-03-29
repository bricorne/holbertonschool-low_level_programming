#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_list - A function that prints a linked list
  * @h: pointer to the list
  * Return: number of nodes in the list
  */

size_t print_list(const list_t *h)
{
	int r = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		r++;
	}
	return (r);
}
