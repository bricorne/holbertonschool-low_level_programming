#include <stdio.h>
#include <string.h>
#include "main.h"

 /**
  * _strspn - Check Holberton
  * @s: an input
  * @accept: an input
  * Return: s or NULL
  */

unsigned int _strspn(char *s, char *accept)
{
int b = strspn(s, accept);
return (b);
}
