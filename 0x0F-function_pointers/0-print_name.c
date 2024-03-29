#include "function_pointers.h"

/**
 * print_name - func
 * @name: pointer
 * @f: func pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
