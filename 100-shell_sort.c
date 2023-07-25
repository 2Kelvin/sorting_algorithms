#include "sort.h"

/**
  * shell_sort - advanced insertion sort using gaps
  * @array: the array to be sorted
  * @size: size of the array
  * Return: void
  */

void shell_sort(int *array, size_t size)
{
	size_t i = 0, n = 0, gap = 1;
	int tempVar;

	if (size < 2 || array == NULL)
		return;
	while (gap <= size / 3)
		gap = gap * 3 + 1;
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			tempVar = array[i];
			for (n = i; n>= gap && array[n - gap] > tempVar; n -= gap)
				array[n] = array[n - gap];
			array[n] = tempVar;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
