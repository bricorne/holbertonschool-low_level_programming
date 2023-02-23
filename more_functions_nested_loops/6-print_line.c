#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * more_numbers - Check Holberton
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void print_line(int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    _putchar('_');
  }
  _putchar('\n');
}
