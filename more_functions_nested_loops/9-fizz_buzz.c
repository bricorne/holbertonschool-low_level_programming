#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - Check Holberton
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int main(void)
{
int i;
for (i = 1; i < 100; i++)
{
if (i % 5 == 0 && i % 3 ==0)
{
printf("Fizz Buzz ");
}
else if (i % 5 == 0)
{
printf("Fizz ");
}
else if (i % 3 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}