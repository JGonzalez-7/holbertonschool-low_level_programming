#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Calls a function to print a name
 * @name: Pointer to the name string to be printed
 * @f: Pointer to a function that takes a char pointer as argument
 *
 * Description: This function checks if the name and function pointer
 * are not NULL, and then calls the function pointed to by @f to print
 * the name. The printing behavior depends on the function passed.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
