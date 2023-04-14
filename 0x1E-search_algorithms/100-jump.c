#include "search_algos.h"

/**
 * jump_search - searches for an element of a sorted array
 * using the jump algorithm
 *
 * @array: input array
 * @size: array size
 * @value: element to be searched for
 * Return: Always EXIT SUCCESS
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL || size == 0)
		return -1;

	while (array[(int)fmin(step, size)-1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return -1;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev - (int)sqrt(size), prev);

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;

		if (prev == (int)fmin(step, size))
			return -1;
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return prev;
	}

	return (-1);
}
