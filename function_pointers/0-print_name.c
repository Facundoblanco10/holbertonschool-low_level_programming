#include "function_pointers.h"

/**
* print_name - function that print a name
* @name: name
* @f: function
*/

void print_name(char *name, void (*f)(char *))
{
	 f(name);
}
