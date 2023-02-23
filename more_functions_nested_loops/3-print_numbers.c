#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_numbers - Check Holberton
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void print_numbers(void)
{
  int i;
  for (i = 0; i < 10; i++)
    {
      _putchar(i);
      _putchar("\n");
    }
}
