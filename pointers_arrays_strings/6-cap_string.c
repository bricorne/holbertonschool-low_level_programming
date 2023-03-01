#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *cap_string - Check Holberton
 *@str: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

char *cap_string(char *str)
{
int i = 0;

while (str[i])
{

while (!(str[i] >= 'a' && str[i] <= 'z'))
{
i++;
}
if (str[i - 1] == ' ' ||
str[i - 1] == '\t' ||
str[i - 1] == '\n' ||
str[i - 1] == ',' ||
str[i - 1] == ';' ||
str[i - 1] == '.' ||
str[i - 1] == '!' ||
str[i - 1] == '?' ||
str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '}' ||
i == 0)
str[i] -= 32;
i++;
}
return (str);
}
