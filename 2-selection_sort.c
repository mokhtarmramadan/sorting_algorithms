#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array pointer
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int min;
	size_t i, j;
	bool swap = false;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				swap = true;
			}
		}
		if (swap == true)
			swap_and_print(&array[i], &array[min], array, size);
		swap = false;
	}
}


/**
 * swap_and_print - swaps two values of an array and prints the new array
 * @x: First value
 * @y: Second value
 * @array: The array we want to print
 * @size: Array size
 * Return: void
 */
void swap_and_print(int *x, int *y, int *array, size_t size)
{
        int temp;

        temp = *x;
        *x = *y;
        *y = temp;
        print_array(array, size);
}
