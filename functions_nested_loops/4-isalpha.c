#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - Check Holberton
 * @c: An input character
 * 
 * Return: 1 if is alphabetic character or 0 if is other
 */

int _isalpha(int c)
{
char l = (char)c;
if (isalpha(l))
{
return (1);
}
else
{
return (0);
}
}
