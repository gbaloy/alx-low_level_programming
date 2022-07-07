#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: variable name
 * @f: void function
 */

void print_name(char *name, void (*f)(char*)
{
	if (name && f)
	{
		f(name);

	}
}

