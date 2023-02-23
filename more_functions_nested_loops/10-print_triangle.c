#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_triangle - Check Holberton
 *@size: an input number
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void print_triangle(int size)
{
int i, j;

for (i = 0; i < size; i++)
{

for (j = 0; j < size; j++)
{

for (n = size - 1 ;j < n; n--)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
if (i <= 0)
{
_putchar('\n');
}

