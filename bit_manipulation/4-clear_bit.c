#include "main.h"

/**
  * clear_bit - function that sets the value of a bit to 0 at a given index
  * @n: a number
  * @index: an index
  * Return: 1 or -1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	*n &= mask;
	return (1);
}
