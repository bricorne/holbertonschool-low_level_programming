#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - return if its lower or no
 *
 * c - the input value
 */

int _islower(int c)
{
char l = (char)c;
if (islower(l))
{
return (1);
}
else
{
return (0);
}
}
