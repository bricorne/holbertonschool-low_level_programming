#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * leet - Check Holberton
 *@str: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

char *leet(char *str)
{
int i;
int j;
char l[] = "aAeEoOtTlL";
char n[] = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{

for (j = 0; j < 10; j++)
{

if (str[i] == l[j])
{
str[i] = n[j];
}
}
}
return (str);
}
