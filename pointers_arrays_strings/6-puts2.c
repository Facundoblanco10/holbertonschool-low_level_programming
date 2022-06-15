#include "main.h"

/**
* puts2 - print every other character of a string
*
* @str: string
*/

void puts2(char *str)
{
	char c;
	int i = 0;

	while (*(str + i) != '\0')
	{
		c = *(str + i);
		_putchar(c);
		i++;
		i++;
	}
	_putchar('\n');
}
