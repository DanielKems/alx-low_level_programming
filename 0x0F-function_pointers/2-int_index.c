#include "function_pointers.h"

/**
 * int_index - searches for index
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function that compares int
 * Return: return 0, if the index of the first element for which the cmp function does not return.
 * 	    return -1, if no element matches
 * 	    return -1, if If size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
