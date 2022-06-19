#include "main.h"

/**
* print_chessboard - entry point
*
* @a: pieces and spaces
*
*/

void print_chessboard(char (*a)[8])
{
	int b = 0;
	int c = 0;

	while (b < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[b][c]);
			c++;
		}
		_putchar('\n');
		b++;
	}
}
