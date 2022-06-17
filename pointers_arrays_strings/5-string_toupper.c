#include "main.h"

/**
* string_toupper - entry point
* @t: character
* Return: always 0
*/

char *string_toupper(char *t)
{
	int i = 0;

	while (t[i])
	{
		if (t[i] >= 97 && t[i] <= 122)
			t[i] -= 32;
		i++;
	}
	return (t);
}
