#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *string_toupper - Check Holberton
 *@n: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

char *string_toupper(char *n)
{
int i;
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = (int)n[i] - 32;
}
return (n);
}
