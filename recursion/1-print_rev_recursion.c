#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - Check Holberton
 *@s: an input
 */

void _print_rev_recursion(char *s)
{
int size = 0;

while (s[size] != '\0')
{
size++;
}
while (size)
{
_putchar(s[--size]);
}
}
