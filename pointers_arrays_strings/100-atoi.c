#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - Check Holberton
 *@s: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _atoi(char *s)
{
  
  int x = 0;

  if (atoi(s) != 0)
    {
      x = atoi(s);
    }
 return (x);
}
