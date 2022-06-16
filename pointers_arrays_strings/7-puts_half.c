#include "main.h"

/**
* puts_half - prints half of a string, followed by a new line.
*
* @str: string
*/

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	n = (i - 1) / 2;
	
	if (i == 0)
	{
		_putchar('\n');
	}
	else if (i % 2 == 0)
	{
		for (n++; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
			_putchar('\n');
	}
	else 
	{
		for (n++; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
			_putchar('\n');
	}
}
