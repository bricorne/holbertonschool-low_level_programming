#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - Check Holberton
 *@s: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void puts2(char *str)
{
int len = 0;
int i;

while (str[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
if (i % 2 == 0)
{
printf("%c", str[i]);
}
}
printf("\n");
}
