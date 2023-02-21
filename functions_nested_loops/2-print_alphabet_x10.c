#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet x10
 */

void print_alphabet_x10(void)
{
int i;
char a;
for (i = 0; i < 10; i++)
{
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
}
}
