#include "search_algos.h"
/**
 * advanced_binary_recursive - Search for a value recursively in array.
 * @array: A pointer to the first element of the sub-array.
 * @left: The starting index of the sub-array.
 * @right: The ending index of the sub-array.
 * @value: The value to search
 * Return: Return the located index or -1 if value is not present.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for a value located in array.
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search.
 * Return: Return the value located, or -1 if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
