#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - computes the absolute value of an integer
 * @n: An input character
 * Return: always 0.
 */

int print_last_digit(int n)
{
int r = n % 10;
_putchar(r);
return (r);
}
