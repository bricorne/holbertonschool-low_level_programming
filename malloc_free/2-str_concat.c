#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
char *s;
int i = strlen(s1);
int y = strlen(s2);
int r = y + i;

if (s1 == NULL || s2 == NULL)
return (NULL);

s = malloc((sizeof(char) * r) +1);

if (s == NULL)
return (NULL);

strcat(s,s1);
strcat(s,s2);

s[r] = '\0';
return (s);
}
