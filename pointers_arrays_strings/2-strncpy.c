#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_strcat - Check Holberton
 *@dest: an input
 *@src: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0'; ++i)
{
  if (i <= n)
    {
dest[i] = src[i];
    }
 }
dest[i] = '\0';
return (dest);
}
