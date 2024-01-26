#include <stdio.h>

/**
 * swap - Swaps the values of two integers
 *
 * @x: the first integer
 * @y: the second integer
 */
void swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}

/**
 * printArray - Prints an array of integers.
 * @array: The array to be printed.
 * @size: Number of elements in an array.
 */
void printArray(int array[], size_t size)
{
for (size_t i = 0; i < size; i++)
printf("%d ", array[i]);
printf("\n");
}

/**
 * selection_sort - sorts an array of integers in ascending order.
 * @array: The array to be sorted.
 * @size: Number of elements in an array.
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min_idx;

for (i = 0; i < size - 1; i++)
{
min_idx = i;
for (j = i + 1; j < size; j++)
if (array[j] < array[min_idx])
min_idx = j;

if (min_idx != i)
{
swap(&array[min_idx], &array[i]);
printArray(array, size);
}
}
}
