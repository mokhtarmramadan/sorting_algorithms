#include "sort.h"

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
