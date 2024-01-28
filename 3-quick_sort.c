#include <stdio.h>

/**
 * swap - Swap two integer values.
 * @a: First integer.
 * @b: Second integer.
 */
void swap(int *a, int *b)
{
int t = *a;
*a = *b;
*b = t;
}

/**
 * partition - This function takes last element as pivot, places
 * the pivot element at its correct position in sorted array, and
 * places all smaller (smaller than pivot) to left of pivot and
 * all greater elements to right of pivot.
 * @arr: An array of integers.
 * @low: Starting index.
 * @high: Ending index.
 * Return: partitioning index.
 */
int partition(int arr[], int low, int high)
{
int pivot = arr[high];
int i = (low - 1);
int j;

for (j = low; j <= high - 1; j++)
{
if (arr[j] < pivot)
{i++;
swap(&arr[i], &arr[j]);
printf("Swapped elements: %d and %d\n", arr[i], arr[j]);
}
}
printf("Swapped elements: %d and %d\n", arr[i], arr[j]);
swap(&arr[i + 1], &arr[high]);
return (i + 1);
}

/**
 * quick_sort - The main function that implements QuickSort.
 * @arr: An array of integers.
 * @low: Starting index.
 * @high: Ending index.
 */
void quick_sort(int arr[], int low, int high)
{
if (low < high)
{
int pi = partition(arr, low, high);
quick_sort(arr, low, pi - 1);
quick_sort(arr, pi + 1, high);
}
}
