#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_alphabet - print the alphabet
 */

void print_alphabet(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
putchar(a);

putchar('\n');
}
