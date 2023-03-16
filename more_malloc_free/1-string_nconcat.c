#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function returns a pointer
 * @s1: the string 1
 * @s2: the string 2
 * @n: the size
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, k = 0, l;
char *s;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[i])
i++;
while (s2[j] && j < n)
j++;

l = i + j;
s = malloc((sizeof(char) * l) + 1);

if (s == NULL)
return (NULL);

while (s1[k])
{
s[k] = s1[k];
k++;
}
j = 0;
while (s2[j] && j < n)
{
s[k] = s2[j];
j++;
k++;
}
s[k] = '\0';
return (s);
}
