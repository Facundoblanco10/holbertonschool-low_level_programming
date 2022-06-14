#include "main.h"

/**
* _puts - entry point
*
* @str: variable
*/

void _puts(char *str)
{
	char c;
	int i = 0;

	if (*(str) != 00)
		{
		while (*(str + i +1) != '\0')
		{
			c = *(str + i);
			_putchar(c);
			i++;
		}
		}
		_putchar('\n');
}
