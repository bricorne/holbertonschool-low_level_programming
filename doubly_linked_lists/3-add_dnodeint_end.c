#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a, *temp;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->next = NULL;

	if (*head == NULL)
	{
		a->prev = NULL;
		*head = a;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = a;
		a->prev = temp;
	}
	return (a);
}
