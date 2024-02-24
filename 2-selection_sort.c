#include "sort.h"

/**
 * swap_int - Swaps two integers in an array.
 * @i: First integer to swap.
 * @j: Second integer to swap.
 */
void swap_int(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t a, b;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		min = array + a;
		for (b = a + 1; b < size; b++)
			min = (array[b] < *min) ? (array + b) : min;

		if ((array + a) != min)
		{
			swap_int(array + a, min);
			print_array(array, size);
		}
	}
}
