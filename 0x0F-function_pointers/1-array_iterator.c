#include "function_pointers.h"

/**
 * array_iterator -execs a func given as a parameter on each element of an arr.
 * @array: input int array
 * @size: size of array
 * @action: pointer to action
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
