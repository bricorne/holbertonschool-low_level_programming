#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - Check Holberton
 *@str: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void puts_half(char *str)
{
int len = 0;
int i;
int len1;

while (str[len] != '\0')
{
len++;
}
len1 = len + 1;

for (i = len1 / 2; i < len; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
