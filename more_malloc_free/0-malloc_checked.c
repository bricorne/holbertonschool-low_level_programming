#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
  char *s;
  s = malloc(b);
  return (s);
}
