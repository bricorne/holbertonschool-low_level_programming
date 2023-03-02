#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_memset - Check Holberton
 *@s: an input
 *@b: an input
 *@n: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

char *_memset(char *s, char b, unsigned int n)
{
  while (n--)
    {
      *s = b;
      s++;
    }
  return (s);
}
