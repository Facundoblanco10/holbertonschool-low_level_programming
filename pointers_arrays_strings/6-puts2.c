#include "main.h"
#include <string.h>

/**
* puts2 - print every other character of a string
*
* @str: string
*/

void puts2(char *str)
{
	char c;
	int i = 0;
	int lenght = strlen(str);

	while (*(str + i) != '\0' && lenght > i)
	{
		c = *(str + i);
		_putchar(c);
		i++;
		i++;
	}
	_putchar('\n');
}
