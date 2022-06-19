#include "main.h"

/**
* _strspn - entry point
* @s: segment
* @accept: character
* Return: i
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int e = 0;
	unsigned int u = 0;

	while (s[i])
	{
		e = 0;
		u = 0;
		while (accept[e])
		{
			if (s[i] == accept[e])
			{
				u = 1;
			}
			e++;
		}
		if (u == 0)
		{
			return (i);
		}
		i++;
	}
	return (i);
}
