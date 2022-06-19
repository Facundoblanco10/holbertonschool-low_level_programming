#include "main.h"

/**
* _strpbrk - entry point
* @s: segment
* @accept: character
* Return: s[c]
*/

char *_strpbrk(char *s, char *accept)
{
	int c = 0;
	int d = 0;
	int u = 0;

	while (s[c])
	{
		u = 0;
		d = 0;
		while (accept[d])
		{
			if (s[c] == accept[d])
			{
				u = 1;
			}
			d++;
		}
		if (u == 1)
		{
			return (&s[c]);
		}
		c++;
	}
	return ('\0');
}
