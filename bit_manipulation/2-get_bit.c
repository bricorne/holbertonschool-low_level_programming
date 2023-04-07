#include "main.h"

/**
  * get_bit - function that returns the value of a bit at a given index
  * @n: a nulmber
  * @index: the index
  * Return: the result
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result = n >> index;
	return (result & 1);
}
