#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t index;
	size_t last;
	size_t middle;

	if (array == NULL)
		return -1;

	index = 0;
	last = size - 1;
	middle = (index + last) / 2;

	while (index <= last)
	{
		printf("Searching in array: ");
		for (i = index; i <= last; i++)
		{
			printf("%d%s ", array[i], (i != last) ? "," : "");
		}
		printf("\n");
		if (array[middle] == value)
		{
			return middle;
		} else if (array[middle] < value)
		{
			index = middle + 1;
		} else {
			last = middle - 1;
		}
		middle = (index + last) / 2;
	}
	return (-1);
}
