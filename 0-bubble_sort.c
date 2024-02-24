#include "sort.h"

/**
 * swap_int - Function swaps two integers in an array
 * @a: first integer to swap.
 * @b: second integer to swap.
 */
void swap_int(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: An array of integers to sort
 * @size: The size of the array
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (a = 0; a < len - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				swap_int(array + a, array + a + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
