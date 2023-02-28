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
char x;

while (s[len] != '\0')
{
len++;
}

while (i < len--)
{
x = s[i];
s[i++] = s[len];
s[len] = x;
}
}
