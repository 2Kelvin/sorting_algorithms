#include "sort.h"

/**
 * bubble_sort - bubble sort an array in ascending order (thro swapping)
 * @array: array to be sorted
 * @size: size of the array to be sorted
 * Return: nothing (void)
 */

void bubble_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
		return;
	size_t iter, i, swapped, tempVar;

	for (iter = 0; iter < size; iter++)
	{
		swapped = 0;
		for (i = 0; i < (size - iter - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				tempVar = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tempVar;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
