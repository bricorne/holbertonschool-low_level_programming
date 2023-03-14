#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * alloc_grid - function returns a pointer
  * @width: the string 1
  * @height: the string 2
  *
  * Return: 0
  */

int **alloc_grid(int width, int height)
{
int **s, i, y;

if (width <= 0 || height <= 0)
return (NULL);

s = malloc(height * sizeof(int *));

if (s == NULL)
{
free(s);
return (NULL);
}
for (i = 0; i < height; i++)
{
s[i] = malloc(width * sizeof(int));
if (s[i] == NULL)
{
for (; i >= 0; i--)
{
free(s[i]);
}
free(s);
return (NULL);
}
for (y = 0; y < height; y++)
{
s[i][y] = 0;
}
}
return (s);
}
