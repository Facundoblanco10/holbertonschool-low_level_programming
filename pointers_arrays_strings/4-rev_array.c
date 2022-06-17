#include "main.h"

/**
* reverse_array - entry point
* @a: variable
* @n: variable
*/

void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (b = 0, n--; n > b; b++, n--)
	{
		c = a[n];
		a[n] = a[b];
		a[b] = c;
	}
}
