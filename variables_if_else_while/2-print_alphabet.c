#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
 
for (c = 'A' ; c <= 'Z' ; c++)
c = tolower(c);
putchar(c);

 return (0);
}
