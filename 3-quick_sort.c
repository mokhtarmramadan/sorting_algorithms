#include "sort.h"


size_t array_size;

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: Size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return;

	array_size = size;
	Lomuto_sort(array, 0, size - 1);
}


/**
 * partition - divide array into two partitions using Lomuto method
 * @array: array to be divided
 * @low: the start
 * @high: the end
 * Return: index of the pivot
 */
size_t partition(int *array, size_t low, size_t high)
{
	size_t i, j;
	int pivot = array[high];

	j = (low - 1);
	for (i = low; i < high; i++)
	{
		if (array[i] < pivot)
		{
			j++;
			if (j != i)
			{
				swap(&array[j], &array[i]);
				print_array(array, array_size);
			}
		}
	}
	j++;
	if (j != high)
	{
		swap(&array[j], &array[high]);
		print_array(array, array_size);
	}

	return (j);
}


/**
 * Lomuto_sort - sorts an array
 * @low: the start
 * @high: the end
 * Return: void
 */
void Lomuto_sort(int *array, int low, int high)
{
	size_t pivot;

	if (low >= high)
		return;

	pivot = partition(array, low, high);

	Lomuto_sort(array, low, pivot - 1);
        Lomuto_sort(array, pivot + 1, high);
}


/**
 * swap_and_print - swaps two values of an array and prints the new array
 * @x: First value
 * @y: Second value
 * Return: void
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
