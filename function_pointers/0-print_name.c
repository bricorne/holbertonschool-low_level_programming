#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - creates an array of chars
  * @name: name to print
  *
  * Return: 0
  */

void print_name(char *name, void (*f)(char *))
{
int i = 0;
while (name[i])
{
	_putchar(name[i]);
	i++;
}
}
