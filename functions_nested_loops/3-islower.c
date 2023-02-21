#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * int_islower - return if its lower or no
 */

int_islower(int c)
char l=(char)c;
{
if ( islower(l))
{
return (1);
}
else
{
return (0);
}
}
