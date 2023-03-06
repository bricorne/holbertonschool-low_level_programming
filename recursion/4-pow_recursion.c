#include "main.h"

/**
 * _pow_recursion - Check Holberton
 * @x: an input
 * @y: an input
 * Return: number
 */

int _pow_recursion(int x, int y)
{
if (y > 0)
{
return(x * _pow_recursion(x, y - 1));
}
if (y == 0)
{
return (1);
}
else
{
return (-1);
}
}
