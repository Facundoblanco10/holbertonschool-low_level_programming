#include "main.h"

/**
* reset_to_98 - entry point
*
* @n: variable
*/

void reset_to_98(int *n)
{
	int *p = &*n;

	*p = 98;
}
