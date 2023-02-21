#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_sign - Check Holberton
 * @n: An input character
 * Return: 1 if > 0, 0 if =0, -1 if < 0
 */

int print_sign(int n)
{
int value;

if (n > 0)
{
printf("+");
value= 1 ;
}
else if (n == 0)
{
printf("0");
value = 0;
}
else
{
printf("-");
value = -1;
}
return (value);
}
