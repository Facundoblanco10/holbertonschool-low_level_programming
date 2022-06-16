#include "main.h"
#include <stdio.h>
/**
*
*
*
*/

void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		printf("%d", *a);
		b++;
		a++;
		if (b < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
