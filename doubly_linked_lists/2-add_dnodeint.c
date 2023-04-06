#include "lists.h"

/**
  * add_dnodeint - A function that adds a node to the head of linked list
  * @head: pointer to a list_t pointer that points to the head struct
  * @n: pointer to int that adds as node
  * Return: pointer to new head of list, NULL on failure
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;

	a = malloc(sizeof(dlistint_t));

	a->n = n;
	a->next = *head;
	a->prev = NULL;

	if(*head != NULL)
	{
		(*head)->prev = a;
	}

	*head = a;
	return (a);
}
