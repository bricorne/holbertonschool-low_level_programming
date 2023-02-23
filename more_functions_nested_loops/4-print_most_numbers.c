#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_most_numbers - Check Holberton
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void print_numbers(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
  if (i != 2 && i != 4)
    {
_putchar(i);
    }
}
_putchar('\n');
}
