#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - A function that print numbers.
 * @separator: the separator
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if(separator == NULL)
		separator = "";
	
	va_start(list, n);
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(list, int), separator);
	
	va_end(list);
	printf("\n");
}
