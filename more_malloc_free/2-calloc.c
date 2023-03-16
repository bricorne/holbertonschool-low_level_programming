#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
  char *s;
int i = 0;

 if (nmemb == 0 || size == 0)
   return (NULL);
 
 s = malloc(nmemb * size);

 while (i < (nmemb * size)
   {
     s[i] = 0;
     i++;
   }
   return (s);
}
