#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - computes the absolute value of an integer
 * @r: An input character
 * Return: always last digit
 */

void jack_bauer(void)
{
  int i;
    for (i = 00; i < 24; i++)
      {
	int j;
	for (j = 00; j < 60; j++)
	  {
	    _putchar((i / 10) + '0');
	    _putchar((i % 10) + '0');
	    _putchar(':');
	    _putchar((j / 10) + '0');
	    _putchar((j % 10) + '0');
	    _putchar('\n');
	  }
      }
}
