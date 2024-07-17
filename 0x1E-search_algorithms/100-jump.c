#include "search_algos.h"
/**
 * jump_search - jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index of value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = lo + sqrt(size), i = 0;

	if (array != NULL)
		while (hi < size)
		{
			if (value > array[lo] && value > array[hi])
			{
				printf("Value checked array[%ld] = [%d]\n", lo, array[lo]);
				printf("Value checked array[%ld] = [%d]\n", hi, array[hi]);
			}
			if (array[lo] == value)
				return (lo);
			else if (array[hi] == value)
				return (hi);
			else if (array[lo] < value && value < array[hi])
			{
				printf("Value found between indexes [%ld] and [%ld]\n", lo, hi);
				for (i = lo; i < hi; i++)
				{
					printf("Value checked array[%ld] = [%d]\n", i, array[i]);
					if (array[i] == value)
						return (i);
				}
			}
			lo = hi;
			hi = hi + sqrt(size);
		}
	return (-1);
}
