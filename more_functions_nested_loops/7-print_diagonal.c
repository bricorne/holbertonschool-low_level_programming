#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_diagonal - Check Holberton
 *@n: an input number
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void print_diagonal(int n)
{
int i;
int j;

for (j = 0; j < n; j++)
{
  for (i = 0; i < n; i++)
    {
_putchar(' ');
    }
  _putchar('\\');
  _putchar('\n');
 }
_putchar('\n');
 
}
