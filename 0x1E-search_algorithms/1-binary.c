#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 * If value is not present in array or if array
 * is NULL, your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("searching in array:");
		for (i = left; i < right; i++)
			printf(" %d,", array[i]);
		printf(" %d\n", array[i]);

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid + 1;
	}
	return (-1);
}