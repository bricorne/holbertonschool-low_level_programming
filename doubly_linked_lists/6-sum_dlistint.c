#include "lists.h"

/**
  * sum_dlistint - A function that sums The elements in the list
  * @head: The pointer to head of the list
  * Return: The sum of all elements in the list, or 0 if list is NULL
  */

int sum_dlistint(dlistint_t *head)
{
	int r = 0;

	while (head)
	{
		r += head->n;
		head = head->next;
	}
	return (r);
}
