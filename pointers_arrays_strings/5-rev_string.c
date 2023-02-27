#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - Check Holberton
 *@s: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void rev_string(char *s)
{
  int len = 0;
  int i;
  char x = s[0];
  
  while (s[len] != '\0')
    {
      len++;
    }
  
  for (i = 0; i < len / 2; i++)
    {
      x = s[i];
      s[i] = s[len--];
      s[len--] = x;
    }
}
