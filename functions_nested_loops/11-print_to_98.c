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
			if (l != 98)
				printf("%d, ", l);
			else
				printf("%d\n", l);
		}
		for (l = n; l >= 98; l--)
		{
			if (l != 98)
				printf("%d, ", l);
			else
				printf("%d\n", l);
		}
	}
	if (n == 98)
		printf("%d\n", n);
}
