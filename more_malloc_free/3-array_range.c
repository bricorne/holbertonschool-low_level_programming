#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: min input
 * @max: max input
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
int i = 0;
int *s;

if (min > max)
{
return (NULL);
}

s = malloc((max - min) * sizeof(int) + sizeof(int));

if (s == NULL)
return (NULL);

while (min <= max)
{
s[i] = min;
i++;
min++;
}
return (s);
}
