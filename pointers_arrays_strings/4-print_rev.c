#include "main.h"
#include <string.h>
/**
* print_rev - entry point
*
*
*/

void print_rev(char *s)
{
	char c;
	int i = strlen(s) - 1;
	if (*(s) != 00)
		{
			while (*(s + i) != '\0')
			{
				c = *(s + i);
				_putchar(c);
				i--;
			}
		}
		_putchar('\n');
}
