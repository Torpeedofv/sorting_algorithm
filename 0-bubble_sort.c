#include "sort.h"

/*
 * bubble_sort - sorts an array of integers in ascending order
 * array: an array of integers to be sorted
 * size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t b;
	int temp;
	int sorted = 1;
	
	if (array == NULL || size < 2)
		return;
	
	while(sorted)
	{
		sorted = 0;
		for (b = 0; b  < size - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				temp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = temp;
				print_array(array, size);
				sorted = 1;
			}
		}
		if (!sorted)
			break;
	}
}
