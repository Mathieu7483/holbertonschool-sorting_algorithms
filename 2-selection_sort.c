#include "sort.h"
/**
*selection_sort -  function that sorts an array of integers
*in ascending order using the Selection sort algorithm
*@array: pointer to the array
*@size: size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, minIndex;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIndex])
				minIndex = j;
		}

		if (minIndex != i)
		{
			temp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = temp;
			print_array(array, size);
		}
	}
}
