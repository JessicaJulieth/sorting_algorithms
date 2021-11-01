#include "sort.h"

/**
 * quick_sort_2 - sorts an array of integers in ascending order using
 * the Selection sort algorithm using recursion
 * @Array: Pointer to array
 * @Size: Size of the array
 * @Init_array: Initial pointer to array
 * @Init_size: Initial size of the array
 */
void quick_sort_2(int *Init_array, size_t Init_size, int *Array, size_t Size)
{
	size_t x, temp;
	int temp_2;
	int y = -1, z, Pivot = Array[Size - 1];

	if (Array && Size > 1)
	{
		x = 0;
		while (x < Size - 1)
		{
			if (Array[x] < Pivot)
			{
				y++;
				temp = y;
				if (temp != x && Array[x] != Array[temp])
				{
					z = Array[x];
					Array[x] = Array[y];
					Array[y] = z;
					print_array(Init_array, Init_size);
				}
			}
			x++;

		}
		temp_2 = Size;
		if (temp_2 - 1 != y + 1 && Array[temp_2 - 1] != Array[y + 1])
		{
			Array[Size - 1] = Array[y + 1];
			Array[y + 1] = Pivot;
			print_array(Init_array, Init_size);
		}
		if (y > 0)
		{
			quick_sort_2(Init_array, Init_size, Array, y + 1);
		}
		quick_sort_2(Init_array, Init_size, Array + y + 2,  Size - (y + 2));
	}
}

/**
 * quick_sort - sorts and ascending order using Selection sort algorithm
 * @array: array to sort
 * @size: the size of the array to sort
 *
 * Return: none
*/

void quick_sort(int *array, size_t size)
{
	int *Init_array;
	size_t size_init;

	if (array)
	{
		Init_array = array;
		size_init = size;
		quick_sort_2(Init_array, size_init, array, size);
	}
}
