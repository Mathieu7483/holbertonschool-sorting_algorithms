#include "sort.h"
/**
*swap - Swaps the values of two integers
*@a: Pointer to the first integer
*@b: Pointer to the second integer
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
*lomuto_partition - lomuto_Partitions the array for quicksort
*@array: The array to lomuto_partition
*@start: The starting index of the lomuto_partition
*@end: The ending index of the lomuto_partition
*@size: The size of the array
*Return: The lomuto_partition index
*/
int lomuto_partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int i = (start - 1);
	int j;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[end])
	{
		swap(&array[i + 1], &array[end]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
*quick_sort_recursive - Recursively sorts an
*array using the Quick sort algorithm
*@array: Pointer to the array to sort
*@start: Starting index of the sub-array to sort
*@end: Ending index of the sub-array to sort
*@size: Size of the array*ay
*/
void quick_sort_recursive(int *array, int start, int end, size_t size)
{
	int PivotIndex;

	if (start < end)
	{

		PivotIndex = lomuto_partition(array, start, end, size);

		quick_sort_recursive(array, start, PivotIndex - 1, size);

		quick_sort_recursive(array, PivotIndex + 1, end, size);
	}
}

/**
*quick_sort -  function that sorts an array of integers
*in ascending order using the Quick sort algorithm
*@array: pointer to the array*ay
*@size: size of the array*ay
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quick_sort_recursive(array, 0, size - 1, size);

}
