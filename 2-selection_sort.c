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
 * selection_sort - places the smallest number at the front
 *
 * Description: It does this through iteration until the list
 * is in ascending order
 *
 * @array: the array of ints
 * @size: size of the array of ints
 * Return: nothing (void)
*/

void selection_sort(int *array, size_t size)
{
	size_t iter, i;
	int minIdx;

	if (size < 2 || array == NULL)
		return;
	for (iter = 0; iter < size - 1; iter++)
	{
		minIdx = iter;
		for (i = iter + 1; i < size; i++)
		{
			if (array[i] < array[minIdx])
				minIdx = i;
		}
		funcSwap(&array[minIdx], &array[iter]);
		print_array(array, size);
	}
}
