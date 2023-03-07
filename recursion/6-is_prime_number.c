#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - It returns if hes prime
 * @n: an input integer
 * Return: 1 or 0
 */

int primeno(int, int);

int is_prime_number(int n)
{
int check = primeno(n, n / 2);
if (check == 1)
{
return (1);
}
else
{
return (0);
}
}

/**
 * primero - It returns the value of square root of n.
 * @n: an input integer
 * @i: an input integer
 * Return: The square root of n
 */

int primeno(int n  , int i)
{
if (i == 1)
{
return (1);
}
else
{
if (n % i == 0)
{
return (0);
}
else
{
return (primeno(n, i - 1));
}
}
}
