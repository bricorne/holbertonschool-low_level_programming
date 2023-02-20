#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c;
for (c = 0x0 ; c >= 0x16 ; c++)
{
  putchar("%x", c);
}
 putchar('\n');
return (0);
}
