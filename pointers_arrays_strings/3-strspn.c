#include <stdio.h>
#include <string.h>
#include "main.h"

 /**
  * _strspn - a function that gets the length of a prefix substring.
  * @s: an input
  * @accept: an input
  * Return: s or NULL
  */

unsigned int _strspn(char *s, char *accept)
{
int count = 0, flag;
char *start = accept;

while (*s)
{
flag = 0;

while (*accept)
{

if (*accept == *s)
{
count++;
flag = 1;
break;
}
accept++;
}
s++;
accept = start;

if (flag == 0)
break;
}
return (count);
}
