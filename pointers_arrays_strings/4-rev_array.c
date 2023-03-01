#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print_array - Check Holberton
 *@a: an input
 *@n: an input
 * Return: 1 if is lowercase or 0 if is uppercase
 */

void reverse_array(int *a, int n)
{
int i;
char x;

for (i = 0; i < n--; i++)
{
x = a[i];
a[i] = a[n];
a[n] = x;
}
}
