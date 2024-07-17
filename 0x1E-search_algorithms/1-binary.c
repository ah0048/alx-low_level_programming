#include "search_algos.h"
/**
 * binary_search - binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1;
	size_t mid = (lo + hi) / 2;

	if (array != NULL)
		while (lo <= hi)
		{
			print_binary_search(array, lo, hi);
			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
				lo = mid + 1;
			else
				hi = mid - 1;
			mid = (lo + hi) / 2;
		}
	return (-1);
}

/**
 * print_binary_search - print binary search
 * @array: pointer to the first element of the array to print
 * @lo: first element
 * @hi: last element
 * Return: void
 */
void print_binary_search(int *array, size_t lo, size_t hi)
{
	size_t i = 0, flag = 0;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		if (i == hi)
			flag = 1;
		printf("%d", array[i]);
		if (flag == 0)
			printf(", ");
	}
	printf("\n");
}
