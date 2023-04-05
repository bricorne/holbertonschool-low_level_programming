#include "lists.h"

/**
  * free_list - free the list
  * @
  */

void free_list(list_t *head)
{
	while (head)
	{
		head = head->next;
	}
	free (head);
}
