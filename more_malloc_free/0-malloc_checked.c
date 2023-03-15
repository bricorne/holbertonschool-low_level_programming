#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function returns a pointer to a newly allocated space in memory
 * @b: the size
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
char *s;
s = malloc(b);
if (s == NULL)
{
return ("98");
}
return (s);
}
