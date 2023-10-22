#include "sort.h"


/**
 * shell_sort -  sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 * Returns: void
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap = 1;

	if (array == NULL || size == 0)
		return;

	for (gap = 1; gap < size / 3;)
		gap = gap * 3 + 1;

	for (; gap > 0; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap(&array[j - gap], &array[j]);
				j -= gap;
			}
		}
		print_array(array, size);
	}
}


/**
 * swap - swaps two values
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
