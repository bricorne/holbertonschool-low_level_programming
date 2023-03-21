#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - print name
  * @array: array
  * @size: the size
  * @action: fonction
  * Return: 0
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

if (array != NULL && size > 0 && action != NULL)
{
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
}
