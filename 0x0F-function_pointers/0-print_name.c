#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name as is
 * @name: name of person
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
