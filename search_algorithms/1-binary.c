#include "search_algos.h"

/**
  * binary_search - searches for a value in a sorted array of integers
  *
  * @array: pointer to the first element of the array to search in
  * @size: the number of elements in array
  * @value: the value to search for
  * Return: the index where value is located or -1
  */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array:");

		for (i = left; i < right; i++)
			printf(" %d,", array[i]);

		printf(" %d\n", array[right]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
