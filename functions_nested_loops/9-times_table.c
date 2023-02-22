#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * time_table - print hours
 * Return: always last digit
 */

void times_table(void)
{
int num=0, res, i, j;

for(i=0; i<10; i++)
    {
      printf("%d ", num);
      for(j=1; j<=10; j++)
	{
	  res = num*j;
	  printf("%d  ", res);
	}
      printf("\n");
      num++;
    }
}
