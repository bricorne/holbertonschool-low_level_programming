#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that print strings.
 * @separator: the separator
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *string;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);

		if (separator == NULL || i == (n - 1))
			separator = "";
		if (string == NULL)
			printf("(nil)%s", separator);
		else
			printf("%s%s", string, separator);
	}
	va_end(list);
	printf("\n");
}
