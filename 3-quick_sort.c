#include "sort.h"

/**
 * funcSwap - function swap the numbers
 * @a: first number
 * @b: second number
 * Return: void (nothing)
*/

void funcSwap(int *a, int *b)
{
	int tempVar = *a;

	*a = *b;
	*b = tempVar;
}

/**
 * lomutoPartition - sub-divide the array
 * @array: the array to partition
 * @left: index for left partition
 * @right: index for right partition
 * @size: array size
 * Return: partition position i
*/
int lomutoPartition(int array[], int left, int right, size_t size)
{
	int m;
	in tpivot = array[right];
	int i = left - 1;

	for (m = left; m <= right - 1; m++)
	{
		if (array[m] < pivot)
		{
			i++;
			funcSwap(&array[i], &array[m]);
			if (i != m)
				print_array(array, size);
		}
	}
	funcSwap(&array[i + 1], &array[right]);
	if (array[i + 1] != array[right])
		print_array(array, size);

	return (i + 1);
}

/**
 * swapping - function swapping the numbers
 * @array: the array to partition
 * @l: left swap
 * @r: right swap
 * @size: array size
 * Return: nothing (void)
*/

void swapping(int array[], int l, int r, size_t size)
{
	int iPivot;

	if (l < r)
	{
		iPivot = lomutoPartition(array, l, r, size);
		swapping(array, l, iPivot - 1, size);
		swapping(array, iPivot + 1, r, size);
	}
}

/**
 * quick_sort - uses sub-division & a pivot element to sort
 * @array: array to be sorted
 * @size: size of the array to be sorted
 * Return: void (nothing)
*/

void quick_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
		return;
	swapping(array, 0, size - 1, size);
}
