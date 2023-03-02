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

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *mem = dest;

while (n--)
{
*dest = *src;
src++;
dest++;
}
return (mem);
}
