#include "sort.h"

/*
 * bubble_sort - sort the array of elements from linked list
 * @array:
 *
*/

void bubble_sort(int *array, size_t size)
{
	size_t x = 0, y = 0, temp = 0;

	if (array == NULL || size < 2)
		return;

    while (x < size)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
		}
        x++;
	}
}
