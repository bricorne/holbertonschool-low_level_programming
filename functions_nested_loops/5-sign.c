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
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
}
}
