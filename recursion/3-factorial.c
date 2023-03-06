#include "main.h"

/**
 * factorial - Check Holberton
 * @n: an input
 * Return: number
 */

int factorial(int n)
{
if (n == 0 || n == 1)
{
return 1;
}
if (n < 0)
{
return (-1);
}
return n * factorial(n - 1);
}
