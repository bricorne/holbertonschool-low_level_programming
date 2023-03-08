#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - A program that adds two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
int num, i, result = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);

if (num >= 0  && isdigit(num))
{
result = result + num;
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", result);
return (0);
}
