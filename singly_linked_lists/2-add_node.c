#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_node - A function that adds a node to the head of linked list
  * @head: pointer to a list_t pointer that points to the head struct
  * @str: pointer to string that adds as node
  * Return: pointer to new head of list, NULL on failure
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	int len = 0;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	while (str[len])
		len++;

	a->len = len;
	a->str = strdup(str);
	a->next = *head;
	*head = a;
	return (a);
}
