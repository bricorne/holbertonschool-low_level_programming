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

void more_numbers(void)
{
int j;
int i;
for (j = 0; j < 10; j++)
{

for (i = 0; i <= 14; i++)
{
  char n=(char)i;
_putchar(n / 10);
_putchar(n % 10);
}
_putchar('\n');
}
}
