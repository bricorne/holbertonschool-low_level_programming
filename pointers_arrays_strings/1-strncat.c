#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_strncat - Check Holberton
 *@dest: an input
 *@src: an input
 *@n: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{

while (j < n)
{
dest[i] = src[j];
j++;
i++;
}
}
return (dest);
}
