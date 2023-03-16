#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of member
 * @size: size
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
  char *s;
unsigned int i = 0;

 if (nmemb == 0 || size == 0)
   return (NULL);
 
 s = malloc(nmemb * size);

 while (i < (nmemb * size))
   {
     s[i] = 0;
     i++;
   }
   return (s);
}
