#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a, *temp;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	if (*head == NULL)
	{
		a->next = *head;
		*head = a;
	}
	else
	{
		a->next = NULL;
		(*head)->prev = a;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = a;
	}
	return (a);
}
