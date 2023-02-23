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
int j;
int i;

for (j = 0; j < size; j++)
{
  for (i = 0; i < j; i++)
    {
  int h = size - j;
  int e;
  for (e = 0; e < size; e++)
    {
      if (e < h)
	{
_putchar(' ');
}
  else
    {
      _putchar('#');
 }
_putchar('\n');
}
    }
if (size <= 0)
{
putchar('\n');
 }
 }
}

