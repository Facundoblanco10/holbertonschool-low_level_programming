#include "main.h"

/**
* _puts - entry point
*
* @str: variable
*/

void _puts(char *str)
{
	char c;
	int i = -1;

	if (*(str) != 00)
		{
		while (c != '\0')
		{
			i++;
			c = *(str + i);
			_putchar(c);
		}
		}
		_putchar('\n');
}