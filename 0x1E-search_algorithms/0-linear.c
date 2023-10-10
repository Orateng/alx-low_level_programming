#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - Searchs for the index in an array
 * @array: Array to search the index
 * @size: Size of the array
 * @value: Value to find
 * Return: Return the index or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
