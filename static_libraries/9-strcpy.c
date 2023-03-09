#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_strcpy - Check Holberton
 *@dest: an input
 *@src: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; ++i)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
