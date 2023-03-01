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

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while(dest[i]!='\0')
i++;
while(src[j]!='\0')
{
dest[i]=src[j];
j++;
i++;
}
dest[i]='\0';
return (dest);
}
