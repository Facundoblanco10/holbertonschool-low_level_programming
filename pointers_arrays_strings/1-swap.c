#include "main.h"

/**
* swap_int - entry point
* @a: variable
* @b: variable
*/

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
