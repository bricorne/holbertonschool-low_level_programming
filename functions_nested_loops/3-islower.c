#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * int_islower - return if its lower or no
 */

int _islower(int c)
{
char l = (char)c;
if ( islower(l))
{
putchar('1');
}
else
{
putchar('0');
}
return (0);
}
