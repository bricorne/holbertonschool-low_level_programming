#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - Check Holberton
 * Return the size
 *@s: an input
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
