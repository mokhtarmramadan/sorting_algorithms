#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the unsorted array
 * @size: array size
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swape_flag = 0;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swape_flag = 1;
				print_array(array, size);
			}
		}
		if (!swape_flag)
			break;
	}
}
