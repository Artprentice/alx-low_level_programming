#include "function_pointers.h"
/**
 * int_index - function that searches for an int
 * @array: The array of int
 * @size: size of array
 * @cmp: pointer to functions to be used to compare values
 * Return: if no element match of size <= 0, -1
 * otherwise the index of the first element for which the cmp
 * fuction does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
