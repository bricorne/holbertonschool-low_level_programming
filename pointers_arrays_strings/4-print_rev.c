#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - Check Holberton
 *@s: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void print_rev(char *s)
{
{
   int length, c;
   
   char *begin, *end, temp;
 
   length = _strlen(s);
   begin  = s;
   end    = s;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}
}
