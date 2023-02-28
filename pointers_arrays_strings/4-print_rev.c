#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - Check Holberton
 *@s: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void print_rev(char *s)
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
_putchar('\n');
}
