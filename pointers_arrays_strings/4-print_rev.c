#include "main.h"
#include <string.h>

/**
* print_rev - entry point
*
* @s: variable
*/

void print_rev(char *s)
{
	char c;
	int i = strlen(s) - 1;

			while (*(s + i) != '\0')
			{
				c = *(s + i);
				_putchar(c);
				i--;
			}
		_putchar('\n');
}
