#include "main.h"
/**
* print_alphabet_x10 - entry point
*/
void print_alphabet_x10(void)
{
	char let;
	int count = 0;

	for (count = 0; count < 10; count++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
			_putchar('\n');
	}
}
