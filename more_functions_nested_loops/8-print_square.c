#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_square - Check Holberton
 *@size: an input number
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void print_square(int size)
{
int i;
int j;

for (j = 0; j < size; j++)
{

for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
putchar('\n');
}
}
