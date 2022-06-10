#include "main.h"
#include <stdio.h>

/**
*
*
*
*/

void print_to_98(int n)
{
	int l;

	if (n != 98)
	{
		for (l = n; l <= 98; l++)
		{
			printf("%d, ", l);
		}
		for (l = n; l >= 98; l--)
		{
			printf("%d, ", l);
		}
	}
	if (n == 98)
		printf("%d\n", n);
}
