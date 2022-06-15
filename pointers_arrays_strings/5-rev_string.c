#include "main.h"
#include <string.h>

/**
* rev_string - entry point
*
* @s: variable
*/

void rev_string(char *s)
{
	int i = strlen(s) - 1;
	char c;
	int a = 0;

	while (i > a)
	{
		c = *(s + a);
		*(s + a) = *(s + i);
		*(s + i) = c;
		i--;
		a++;
	}
}
