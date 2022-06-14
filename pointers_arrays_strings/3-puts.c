#include "main.h"

/**
*
*
*
*/

void _puts(char *str)
{
	char c;
	int i = 0;

	if (*(str) != 00)
		{
		while (c != '\0')
		{
			c = *(str + i);
			_putchar(c);
			i++;
		}
		_putchar('\n');
		}
}
