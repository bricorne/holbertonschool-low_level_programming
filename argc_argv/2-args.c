#include <stdio.h>

/**
 * main - A program that prints all arguements it receives
 * @argc: The arguement counter
 * @argv: The arguement values
 * Return: Always 0 (Success)
 */

void main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s ", argv[i]);
}
printf("\n");
}
