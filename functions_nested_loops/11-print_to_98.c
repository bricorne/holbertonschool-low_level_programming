#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_to_98 - Check Holberton
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int n)
{
  int i;

  if (n < 98)
    {
      for (i = n; i < 99; i++)
	{
	  _putchar(i);
	}
    }
  else if (n > 98)
    {
      for (i = n; i > 98; i--)
	{
	  _putchar(i);
	}
    }
else
{
_putchar(n);
}
}
