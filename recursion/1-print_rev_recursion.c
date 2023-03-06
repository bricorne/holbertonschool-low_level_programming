#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - Check Holberton
 *@s: an input
 */

void _print_rev_recursion(char *s)
{
if (s*)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
