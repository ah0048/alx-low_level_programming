#include "search_algos.h"

/**
 * jump_search - jump search algorithm to find a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located, or -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t lo = 0;
	size_t hi = 0;
	size_t step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (hi < size && array[hi] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", hi, array[hi]);
		lo = hi;
		hi += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", lo, hi);

	for (i = lo; i < size && i <= hi; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
