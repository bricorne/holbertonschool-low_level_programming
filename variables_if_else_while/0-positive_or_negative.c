#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0){
	  printf(n, "%d  is positive \n");
	      }
	else if (n = 0){
	  printf(n, "%d is zero \n");
	}
	else {
	  printf(n, "%d is negative \n");
	}
	return (0);
}
