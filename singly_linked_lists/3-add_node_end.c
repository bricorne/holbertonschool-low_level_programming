#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - A function that adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: string to add as node
 * Return: pointer to new element of list, NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *temp;
	int len = 0;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	while (str[len])
		len++;

	a->len = len;
	a->str = strdup(str);
	if (*head == NULL)
	{
		a->next = *head;
		*head = a;
	}
	else
	{
		a->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = a;
	}
	return (a);
}
