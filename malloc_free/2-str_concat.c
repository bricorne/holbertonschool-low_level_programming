#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - function returns a pointer
  * @s1: the string 1
  * @s2: the string 2
  *
  * Return: 0
  */

char *str_concat(char *s1, char *s2)
{
char *s;
int i = strlen(s1);
int y = strlen(s2);
int r = y + i;

s = malloc((sizeof(char) * r) + 1);

if (s == NULL)
return (NULL);

if (s1 == NULL)
{
strcat (s, s2);
}
else if (s2 == NULL)
{
strcat (s, s1);
}
else
{
strcat(s, s1);
strcat(s, s2);
}
s[r] = '\0';
return (s);
}
