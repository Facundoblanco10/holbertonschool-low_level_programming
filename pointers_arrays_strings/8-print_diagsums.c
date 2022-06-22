#include "main.h"
#include <stdio.h>

/**
* print_diagsums - entry point
* @a: int
* @size: size
*/

void print_diagsums(int *a, int size)
{
	int c = 0;
	int sum1 = 0;
	int sum2 = 0;
	int e = 0;
	int i = size - 1;

	while (c < size)
	{
		sum1 += a[e];
		sum2 += a[i];
		e += size + 1;
		i += size - 1;
		c++;
	}
	printf("%d, %d\n", sum1, sum2);
}
