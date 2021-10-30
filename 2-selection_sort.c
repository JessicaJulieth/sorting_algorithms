#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the Selection sort algorithm
 * @array: array to sort
 * @size: the size of the array to sort
 *
 * Return: none
*/

void selection_sort(int *array, size_t size)
{
	size_t x, y, z, temp;

	if (size < 2)
		return;

    x = 0;
    while (x < size)
	{
		z = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[z] > array[y])
				z = y;
		}

		if (z != x)
		{
			temp = array[x];
			array[x] = array[z];
			array[z] = temp;
			print_array(array, size);
		}
        x++;
	}
}
