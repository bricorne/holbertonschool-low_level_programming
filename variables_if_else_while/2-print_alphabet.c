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
int alpha; 
for (c = 'A' ; c <= 'Z' ; c++)
alpha = tolower(c);
putchar(alpha);

 return (0);
}
