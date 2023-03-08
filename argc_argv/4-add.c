#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that adds two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
int num1, num2, result;
if (argc != 3)
{
printf("0\n");
return (0);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
if (num1 < 0 || num2 < 0)
{
printf("Error\n");
return (1);
}
result = num1 +num2;
printf("%d\n", result);
return (0);
}
